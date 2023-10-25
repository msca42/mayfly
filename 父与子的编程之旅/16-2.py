import pygame

pygame.init()
# 创建一个窗口
screen = pygame.display.set_mode([640, 480])

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
