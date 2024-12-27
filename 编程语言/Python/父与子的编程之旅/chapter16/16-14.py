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
# 设置速度
x_speed = 10

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        #退出事件
        if event.type == pygame.QUIT:
            running = False
    # 延时
    pygame.time.delay(20)
    # 擦除
    pygame.draw.rect(screen,[255,255,255],[x,y,90,90],0)
    # 微移
    x = x + x_speed
    # 设置反弹区间
    if x > screen.get_width() - 90 or x < 0:
        x_speed = - x_speed
    # 块移
    screen.blit(my_ball,[x,y])
    # 刷新
    pygame.display.flip()

# 退出模块
pygame.quit()
