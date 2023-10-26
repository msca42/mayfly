import pygame, sys, math

# 初始化
pygame.init()

# 点列表
dots = [[221, 432], [225, 331], [133, 342], [141, 310],
        [51, 230], [74, 217], [58, 153], [114, 164],
        [123, 135], [176, 190], [159, 77], [193, 93],
        [230, 28], [267, 93], [301, 77], [284, 190],
        [327, 135], [336, 164], [402, 153], [386, 217],
        [409, 230], [319, 310], [327, 342], [233, 331],
        [237, 432]]
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 屏幕背景
screen.fill([255, 255, 255])
# 绘制线
pygame.draw.lines(screen, [0, 0, 0], True, dots, 2)
# 刷新屏幕
pygame.display.flip()
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
