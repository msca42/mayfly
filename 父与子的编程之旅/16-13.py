import pygame, sys

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 填充背景颜色
screen.fill([255, 255, 255])
# 加载图片
my_ball = pygame.image.load("beach_ball.png")
# 设置目标坐标
x = 50
y = 50
# 放置图片
screen.blit(my_ball, [x, y])
# 刷新屏幕
pygame.display.flip()

for looper in range(1, 100):
    # 循环体： 在x轴绘制白色长方形覆盖图片，放置图片，增加x,刷新屏幕
    pygame.time.delay(20)
    pygame.draw.rect(screen, [255, 255, 255], [x, y, 90, 90], 0)
    x = x + 5
    screen.blit(my_ball, [x, y])
    pygame.display.flip()

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
