import pygame, sys

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 填充背景颜色
screen.fill([255, 255, 255])
# 加载图片
my_ball = pygame.image.load("beach_ball.png")
# 设置初始坐标x,y
x = 50
y = 50
# 设置移动速度
x_speed = 10
y_speed = 10

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    # 延迟
    pygame.time.delay(20)
    # 白色长方形擦除沙滩球
    pygame.draw.rect(screen, [255, 255, 255], [x, y, 90, 90], 0)
    # 改变沙滩球坐标
    x = x + x_speed
    y = y + y_speed
    # 改变上下左右方向
    if x > screen.get_width() - 90 or x < 0:
        x_speed = - x_speed
    if y > screen.get_height() - 90 or y < 0:
        y_speed = - y_speed
    # 放置沙滩球
    screen.blit(my_ball, [x, y])
    # 刷新屏幕
    pygame.display.flip()
pygame.quit()
