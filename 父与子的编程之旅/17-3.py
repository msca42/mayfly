import sys, pygame
from random import choice


# Ball类
class Ball(pygame.sprite.Sprite):
    # 初始化图片，矩形，坐标，速度
    def __init__(self, image_file, location, speed):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file)
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        self.speed = speed

    # move函数，设置转向
    def move(self):
        self.rect = self.rect.move(self.speed)
        if self.rect.left < 0 or self.rect.right > width:
            self.speed[0] = -self.speed[0]
        if self.rect.top < 0 or self.rect.bottom > height:
            self.speed[1] = -self.speed[1]


# 碰撞函数
def animate(group):
    # 擦除球
    screen.fill([255, 255, 255])
    for ball in group:
        # 球移动
        ball.move()
        # 检查碰撞情况
        # 检查步骤：
        # 从动画精灵组删除这个动画精灵
        group.remove(ball)
        # 检查这个动画精灵与其所在分组中其他动画精灵之间的碰撞情况
        if pygame.sprite.spritecollide(ball, group, False):
            ball.speed[0] = - ball.speed[0]
            ball.speed[1] = - ball.speed[1]
        # 把这个动画精灵添加到原来的分组中
        group.add(ball)

        # 屏幕放置球
        screen.blit(ball.image, ball.rect)
    pygame.display.flip()
    pygame.time.delay(20)


# 屏幕尺寸
size = width, height = 640, 480
# 绘制屏幕
screen = pygame.display.set_mode(size)
# 背景色
screen.fill([255, 255, 255])
# 图片
img_file = "beach_ball.png"
#  创建动画精灵组
group = pygame.sprite.Group()
# 将球添加进动画精灵组
for row in range(0, 2):
    for column in range(0, 2):
        location = [column * 180 + 10, row * 180 + 10]
        speed = [choice([-2, 2]), choice([-2, 2])]
        ball = Ball(img_file, location, speed)
        group.add(ball)

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    animate(group)
pygame.quit()
