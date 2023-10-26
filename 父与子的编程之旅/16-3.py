import pygame
# 初始化
pygame.init()
# 创建一个窗口
screen = pygame.display.set_mode([640, 480])
# 使用白色填充窗口背景
screen.fill([255, 255, 255])
# 在窗口内画圆
# 参数：屏幕、颜色、位置、半径、线宽
# 线宽为0表示填充图形
pygame.draw.circle(screen, [255, 0, 0], [100, 100], 30, 0)
# 切换屏幕对象
pygame.display.flip()
"""
切换对象原理
    Pygame窗口显示的对象都有两个副本
    当处理动画时，尽可能的流程，每次对图像作出改动，不会马上刷新
    而是作出足够多的改动，统一切换到最新版本，一次性显示图形的所有改动
"""


# 时间循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
