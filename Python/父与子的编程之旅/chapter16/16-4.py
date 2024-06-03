import pygame
import sys
pygame.init()
screen = pygame.display.set_mode([640, 480])
screen.fill([255, 255, 255])  # 用白色背景填充窗口
pygame.draw.circle(screen, [255, 0, 0], [320, 240], 30, 0)  # 画一个圆
pygame.display.flip()  # 切换窗口显示对象副本
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
