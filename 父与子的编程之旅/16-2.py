import pygame

# 初始化
pygame.init()
# 创建一个窗口
screen = pygame.display.set_mode([640, 480])

# 事件循环, 监听窗口内发生的所有事件
running = True
while running:
    for event in pygame.event.get():
        print("event", event)
        print("event.type", event.type)
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
