import pygame, sys
from pygame.locals import *

# 球类
class Ball(pygame.sprite.Sprite):
    def __init__(self, image_file, speed, location):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file)
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        self.speed = speed

    def move(self):
        self.rect = self.rect.move(self.speed)
        # 左右反向
        if self.rect.left < 0 or self.rect.right > screen.get_width():
            self.speed[0] = -  self.speed[0]

        # 顶部反向
        if self.rect.top <= 0:
            self.speed[1] = -  self.speed[1]


# 球拍类
class Paddle(pygame.sprite.Sprite):
    def __init__(self, location=[0, 0]):
        pygame.sprite.Sprite.__init__(self)
        # 为球拍创建表
        image_surface = pygame.surface.Surface([100, 20])
        # 黑色填充
        image_surface.fill([0, 0, 0])
        # 将表转换为图片
        self.image = image_surface.convert()
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location


pygame.init()
screen = pygame.display.set_mode([640, 480])
clock = pygame.time.Clock()
ball_speed = [10, 5]
myBall = Ball('wackyball.bmp', ball_speed, [50, 50])
# 碰撞
ballGroup = pygame.sprite.Group(myBall)
paddle = Paddle([270, 400])

running = True
while running:
    clock.tick(30)
    screen.fill([255, 255, 255])
    for event in pygame.event.get():
        if event.type == QUIT:
            running = False
        elif event.type == pygame.MOUSEMOTION:
            paddle.rect.centerx = event.pos[0]
    if pygame.sprite.spritecollide(paddle, ballGroup, False):
        myBall.speed[1] = - myBall.speed[1]
    myBall.move()
    screen.blit(myBall.image, myBall.rect)
    screen.blit(paddle.image, paddle.rect)
    pygame.display.flip()
pygame.quit()
