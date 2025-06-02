# 导入模块
import pygame

# 初始化
pygame.init()

## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        #退出事件
        if event.type == pygame.QUIT:
            running = False

# 退出模块
pygame.quit()
