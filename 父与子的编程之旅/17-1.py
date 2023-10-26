import sys, pygame


# 创建Ball子类继承Sprite基类
class Ball(pygame.sprite.Sprite):
    # 初始化Ball
    def __init__(self, image_file, location):
        # 初始化动画精灵
        pygame.sprite.Sprite.__init__(self)
        # 初始化图片文件（加载图片文件）
        self.image = pygame.image.load(image_file)
        # 定义图像边界的矩形
        self.rect = self.image.get_rect()
        # 设置初始坐标
        self.rect.left, self.rect.top = location

# 设置屏幕大小
size = width, height = 640, 480
# 绘制屏幕
screen = pygame.display.set_mode(size)
# 使用白色填充屏幕
screen.fill([255, 255, 255])
# 图片
img_file = "beach_ball.png"
# 沙滩球列表
balls = []
# 初始化9个沙滩球
for row in range(0, 3):
    for column in range(0, 3):
        location = [column * 180 + 10, row * 180 + 10]
        ball = Ball(img_file, location)
        balls.append(ball)
# 屏幕绘制沙滩球
for ball in balls:
    screen.blit(ball.image, ball.rect)
# 刷新屏幕
pygame.display.flip()

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
