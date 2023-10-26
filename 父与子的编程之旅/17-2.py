import sys, pygame
from  random import choice


# 定义球类
class Ball(pygame.sprite.Sprite):
    # 初始化成员变量
    def __init__(self, image_file, location, speed):
        # 初始化Sprite类
        pygame.sprite.Sprite.__init__(self)
        # 初始化图片
        self.image = pygame.image.load(image_file)
        # 初始化图片矩形
        self.rect = self.image.get_rect()
        # 初始化矩形位置
        self.rect.left, self.rect.top = location
        # 初始化速度
        self.speed = speed

    # 移动函数
    def move(self):
        # 长方形内置move方法
        self.rect = self.rect.move(self.speed)
        # 靠边转向
        if self.rect.left < 0 or self.rect.right > width:
            self.speed[0] = -self.speed[0]
        if self.rect.top < 0 or self.rect.bottom > height:
            self.speed[1] = -self.speed[1]


# 屏幕宽高
size = width, height = 640, 480
# 绘制屏幕
screen = pygame.display.set_mode(size)
# 填充背景颜色
screen.fill([255, 255, 255])
# 图片名称
img_file = "beach_ball.png"
# 球列表
balls = []
# 创建球对象
for row in range(0, 3):
    for column in range(0, 3):
        location = [column * 180 + 10, row * 180 + 10]
        speed = [choice([-2, 2]), choice([-2, 2])]
        ball = Ball(img_file, location, speed)
        balls.append(ball)

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    # 延迟2s
    pygame.time.delay(20)
    # 屏幕白色
    screen.fill([255,255,255])
    # 列表多球移动
    for ball in balls:
        ball.move()
        # 放置球图片
        screen.blit(ball.image, ball.rect)
    # 刷新屏幕
    pygame.display.flip()
pygame.quit()
