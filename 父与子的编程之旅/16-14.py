import pygame, sys

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 设置白色背景
screen.fill([255, 255, 255])
# 加载图片
my_ball = pygame.image.load("beach_ball.png")
# 设置初始坐标
x = 50
y = 50
# 设置x轴图片移动方向
x_speed = 10
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    # 延迟2秒
    pygame.time.delay(20)
    # 绘制白色长方体
    pygame.draw.rect(screen, [255, 255, 255], [x, y, 90, 90], 0)
    # 步进x坐标
    x = x + x_speed
    # 沙滩球是否在边界
    if x > screen.get_width() - 90 or x < 0:
        # 改变方向
        x_speed = - x_speed
    screen.blit(my_ball, [x, y])
    pygame.display.flip()
pygame.quit()
