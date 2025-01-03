# 导入模块
import pygame,sys,random

# 初始化
pygame.init()

## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])
# 填充屏幕 白色
screen.fill([255,255,255])

for i in range(100):
    width = random.randint(0,250)
    height = random.randint(0,100)
    top = random.randint(0,400)
    left = random.randint(0,500)
    # 画一个矩形
    pygame.draw.rect(screen,[0,0,0],[left,top,width,height],1)
    # 切换图形的最新版本(刷新)
    pygame.display.flip()

pygame.time.delay(30)

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        #退出事件
        if event.type == pygame.QUIT:
            running = False

# 退出模块
pygame.quit()
