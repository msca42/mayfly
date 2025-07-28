# 导入模块
import pygame,sys,random
from pygame.color import THECOLORS

# 初始化
pygame.init()

## 绘制屏幕 640x480
screen = pygame.display.set_mode([640,480])
# 填充屏幕 白色
screen.fill([255,255,255])

for i in range(100):
    # 参数随机数
    width = random.randint(0,250)
    height = random.randint(0,100)
    top = random.randint(0,400)
    left = random.randint(0,500)
    color_name = random.choice(list(THECOLORS.keys()))
    # 颜色
    color = THECOLORS[color_name]
    # 线宽
    line_width = random.randint(1,3)
    # 画一个矩形
    # 通过将RGB修改为具体的color名赋予线条颜色
    pygame.draw.rect(screen,color,[left,top,width,height],line_width)

# 切换图形的最新版本(刷新)
pygame.display.flip()

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        #退出事件
        if event.type == pygame.QUIT:
            running = False

# 退出模块
pygame.quit()
