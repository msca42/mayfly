import pygame, sys

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 添加屏幕背景
screen.fill([255, 255, 255])
# 加载图片
my_ball = pygame.image.load("beach_ball.png")
# 放置图片
screen.blit(my_ball, [50, 50])
# 刷新屏幕
pygame.display.flip()
# 延迟2s
pygame.time.delay(2000)
# 放置图片
screen.blit(my_ball, [150, 50])
# 画白色长方形覆盖第一个图片
pygame.draw.rect(screen, [255, 255, 255], [50, 50, 90, 90], 0)
# 刷新屏幕
pygame.display.flip()
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
