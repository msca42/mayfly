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

# 块移 从一个表面复制到另一个表面
screen.blit(my_ball, [50, 50])

# 切换图形的最新版本(刷新)
pygame.display.flip()

# 延时
pygame.time.delay(2000)
# 块移
screen.blit(my_ball,[150,50])
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
