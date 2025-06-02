# 导入模块
import pygame,sys

# 初始化
pygame.init()


## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])
# 填充屏幕 白色
screen.fill([255,255,255])

# 加载图片
my_ball = pygame.image.load("beach_ball.png")

# 设置坐标
x = 50
y = 50

# 块移 从一个表面复制到另一个表面
screen.blit(my_ball, [x, y])

# 切换图形的最新版本(刷新)
pygame.display.flip()

for looper in range(1,100):
    # 延时
    pygame.time.delay(20)
    # 擦除
    pygame.draw.rect(screen,[255,255,255],[x,y,90,90],0)
    # 微移
    x = x + 5
    # 块移
    screen.blit(my_ball,[x,y])
    # 刷新
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
