# 导入模块
import pygame

# 初始化
pygame.init()

## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])
# 填充屏幕 白色
screen.fill([255,255,255])
# 画一个圆 参数: 屏幕、RGB、坐标、半径、线宽
pygame.draw.circle(screen,[255,0,0],[100,100],30,0)
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
