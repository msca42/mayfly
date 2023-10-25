import pygame, sys

pygame.init()
# 创建一个窗口
screen = pygame.display.set_mode([640, 480])
# 填充窗口背景
# 白色
screen.fill([255, 255, 255])
# 画圆
# pygame.draw.circle(screen, [255, 0, 0], [320, 240], 30, 0)
# 画长方形
pygame.draw.rect(screen, [255, 0, 0], [250, 150, 300, 200], 2)
pygame.display.flip()
running = True
while running:
    # 事件循环
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
