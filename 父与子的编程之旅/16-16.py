import pygame, sys

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 填充背景颜色
screen.fill([255, 255, 255])
# 加载图片
my_ball = pygame.image.load("beach_ball.png")
# 设置初始化坐标
x = 50
y = 50
# 设置初始速度
x_speed = 5

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    # 延迟
    pygame.time.delay(20)
    # 擦除沙滩球
    pygame.draw.rect(screen, [255, 255, 255], [x, y, 90, 90], 0)
    x = x + x_speed
    # 到达右边界，重置坐标0
    if x > screen.get_width():
        x = 0
    # 放置沙滩球
    screen.blit(my_ball, [x, y])
    # 刷新屏幕
    pygame.display.flip()
pygame.quit()
