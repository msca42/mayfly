# 导入模块
import pygame,sys
import math

# 初始化
pygame.init()

# 点集合
dots = [[221,432],[225,331],[133,342],[141,310],
        [51,230],[74,217],[58,153],[114,164],
        [123,135],[176,190],[159,77],[193,93],
        [230,28],[267,93],[301,77],[284,190],
        [327,135],[336,164],[402,153],[386,217],
        [409,230],[319,310],[327,342],[233,331],
        [237,432]]


## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])
# 填充屏幕 白色
screen.fill([255,255,255])

# 画一个直线
pygame.draw.lines(screen,[255,0,0],True,dots,2)


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
