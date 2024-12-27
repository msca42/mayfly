# 导入模块
import pygame,sys
import math

# 初始化
pygame.init()

## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])
# 填充屏幕 白色
screen.fill([255,255,255])

# 点列表
plotPoints = []

for x in range(0,640):
    y = int(math.sin(x/640 * 4 * math.pi) * 200  + 240)
    plotPoints.append([x,y])
# 画一个直线
pygame.draw.lines(screen,[0,0,0],False,plotPoints,1)

# 切换图形的最新版本(刷新)
pygame.display.flip()

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        #退出事件
        if event.type == pygame.QUIT:
            running = False

# 退出模块
pygame.quit()
