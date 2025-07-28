# 导入模块
import sys,pygame

# 基于父类Sprite创建子类Ball
class Ball(pygame.sprite.Sprite):
    # 初始化 属性image_file location
    def __init__(self, image_file,location):
        # 父类初始化
        pygame.sprite.Sprite.__init__(self)
        # 加载图片
        self.image = pygame.image.load(image_file)
        # 规定动画精灵的矩形边界
        self.rect = self.image.get_rect()
        # 设置球的初始位置
        self.rect.left, self.rect.top = location

# 宽 高
size  = width, height = 640,480
# 绘制屏幕
screen = pygame.display.set_mode(size)
# 白色填充
screen.fill([255,255,255])
# 图片名字
img_file = "beach_ball.png"
balls = []
for row in range(0,3):
    for column in range(0,3):
        location = [column * 180 + 10, row * 180 + 10]
        # 根据球的图片和球的位置创建球
        ball = Ball(img_file,location)
        # 添加到列表中
        balls.append(ball)
for ball in balls:
    # 块移
    screen.blit(ball.image, ball.rect)
# 刷新
pygame.display.flip()

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

# 退出
pygame.quit()