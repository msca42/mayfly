import pygame, sys, math

# 初始化
pygame.init()
# 绘制屏幕
screen = pygame.display.set_mode([640, 480])
# 添加背景颜色
screen.fill([255, 255, 255])
# 绘制640个点位
for x in range(0, 640):
    y = int(math.sin(x / 640 * 4 * math.pi) * 200 + 240)
    pygame.draw.rect(screen, [0, 0, 0], [x, y, 1, 1, ], 1)
# 刷新屏幕
pygame.display.flip()
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
