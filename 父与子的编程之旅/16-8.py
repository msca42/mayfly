import pygame, sys, math

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 添加屏幕背景颜色
screen.fill([255, 255, 255])
# 点列表
plotPoints = []
# 补充点列表
for x in range(0, 640):
    y = int(math.sin(x / 640 * 4 * math.pi) * 200 + 240)
    plotPoints.append([x, y])
# 绘制多点连线
pygame.draw.lines(screen, [0, 0, 0], False, plotPoints, 2)
# 刷新屏幕
pygame.display.flip()
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
