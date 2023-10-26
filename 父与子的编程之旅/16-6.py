import pygame, sys, random
# 颜色
from pygame.color import THECOLORS

# 初始化
pygame.init()
# 绘制窗口
screen = pygame.display.set_mode([640, 480])
# 添加背景颜色
screen.fill([255, 255, 255])
# 绘制100幅图片
for i in range(100):
    width = random.randint(0, 250)
    height = random.randint(0, 100)
    top = random.randint(0, 400)
    left = random.randint(0, 500)
    color_name = random.choice(list(THECOLORS.keys()))
    color = THECOLORS[color_name]
    line_width = random.randint(1,3)
    pygame.draw.rect(screen, [0, 0, 0], [left, top, width, height], line_width)
# 刷新页面
pygame.display.flip()
# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
