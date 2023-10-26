import pygame, sys

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 屏幕背景颜色
screen.fill([255, 255, 255])
# 加载图片
my_ball = pygame.image.load("beach_ball.png")
# 屏幕放置图片
screen.blit(my_ball, [50, 50])
# 刷新屏幕
pygame.display.flip()
# 延迟2秒
pygame.time.delay(2000)
# 屏幕放置图片
screen.blit(my_ball, [150, 50])
# 刷新屏幕
pygame.display.flip()
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
