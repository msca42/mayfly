import pygame

pygame.init()
# 创建一个窗口
screen = pygame.display.set_mode([640, 480])
# 使用白色填充窗口背景
screen.fill([255, 255, 255])
# 在窗口内画圆
pygame.draw.circle(screen, [255, 0, 0], [100, 100], 30, 0)
# 切换屏幕对象
pygame.display.flip()

# 时间循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
