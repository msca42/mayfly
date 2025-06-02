# 导入
import pygame

# 初始化
pygame.init()

## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])
# 填充屏幕 白色
screen.fill([255,255,255])

# 绘图
pygame.draw.ellipse(screen,[255,0,0],[50,50,50,50],0)

# 切换图形的最新版本(刷新)
pygame.display.flip()
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        #退出事件
        if event.type == pygame.QUIT:
            running = False