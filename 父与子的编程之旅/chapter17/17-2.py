import sys
import pygame
from random import choice


class Ball(pygame.sprite.Sprite):  # 定义Ball类的子类
    def __init__(self, image_file, location, speed):
        pygame.sprite.Sprite.__init__(self)  # 初始化动画精灵
        self.image = pygame.image.load(image_file)  # 在动画精灵中加载图像
        self.rect = self.image.get_rect()  # 得到定义图像边界的矩形
        self.rect.left, self.rect.top = location  # 设置球的初始位置
        self.speed = speed

    def move(self):
        self.rect = self.rect.move(self.speed)
        if self.rect.left < 0 or self.rect.right > width:
            self.speed[0] = -self.speed[0]

        if self.rect.top < 0 or self.rect.bottom > height:
            self.speed[1] = -self.speed[1]


size = width, height = 640, 480  # 设置窗口大小
screen = pygame.display.set_mode(size)
screen.fill([255, 255, 255])
img_file = "beach_ball.png"
balls = []
for row in range(0, 3):
    for column in range(0, 3):
        location = [column * 180 + 10, row * 180 + 10]
        speed = [choice([-2, 2]), choice([-2, 2])]
        ball = Ball(img_file, location, speed)
        balls.append(ball)
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    pygame.time.delay(20)
    screen.fill([255, 255, 255])
    for ball in balls:
        ball.move()
        screen.blit(ball.image, ball.rect)
    pygame.display.flip()
pygame.quit()
