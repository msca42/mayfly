# 导入模块
import pygame, sys

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640,480])
# 设置背景
background = pygame.Surface(screen.get_size())
# 填充白色
background.fill([255,255,255])
# 帧
clock = pygame.time.Clock()
# Ball类
class Ball(pygame.sprite.Sprite):
    # 初始化
    def __init__(self, image_file, speed,location):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file)
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        self.speed = speed
    
    # move方法
    def move(self):
        if self.rect.left <= screen.get_rect().left or \
                self.rect.right >= screen.get_rect().right:
            self.speed[0]= -self.speed[0]
        newpos = self.rect.move(self.speed)
        self.rect = newpos

my_ball = Ball('beach_ball.png',[10,0],[20,20])
running = True
while running:
    # 循环事件队列
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_UP:
                my_ball.rect.top = my_ball.rect.top - 10
            elif event.key == pygame.K_DOWN:
                my_ball.rect.top = my_ball.rect.top  + 10
    clock.tick(30)
    screen.blit(background,(0,0))
    my_ball.move()
    screen.blit(my_ball.image, my_ball.rect)
    pygame.display.flip()

pygame.quit()
    
