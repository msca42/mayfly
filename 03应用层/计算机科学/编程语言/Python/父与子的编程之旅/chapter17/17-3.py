# 导入模块
import sys,pygame
from random import choice

# 基于父类Sprite创建子类Ball
class Ball(pygame.sprite.Sprite):
    # 初始化 属性image_file location
    def __init__(self, image_file,location,speed):
        # 父类初始化
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file)
        # ? 矩形
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        self.speed = speed
    
    # move方法
    def move(self):
        self.rect = self.rect.move(self.speed)
        # 设定边界反弹
        if self.rect.left < 0 or self.rect.right > width:
            self.speed[0] = - self.speed[0] 
        if self.rect.top < 0 or self.rect.bottom > height:
            self.speed[1] = - self.speed[1] 

# 检测碰撞
def animate(group):
    screen.fill([255,255,255])
    for ball in group:
        group.remove(ball)
        if pygame.sprite.spritecollide(ball,group,False):
            ball.speed[0] = - ball.speed[0]
            ball.speed[1] = - ball.speed[1]
        
        group.add(ball)
        ball.move()
        screen.blit(ball.image,ball.rect)
    
    pygame.display.flip()
    pygame.time.delay(20)
# 宽 高
size  = width, height = 640,480
# 绘制屏幕
screen = pygame.display.set_mode(size)
# 白色填充
screen.fill([255,255,255])
# 图片名字
img_file = "beach_ball.png"
# 创建动画精灵组
group = pygame.sprite.Group()
for row in range(0,3):
    for column in range(0,3):
        location = [column * 180 + 10, row * 180 + 10]
        speed = [choice([-2,2]),choice([-2,2])]
        # 根据球的图片和球的位置创建球
        ball = Ball(img_file,location,speed)
        # 添加到列表中
        group.add(ball)

# 事件循环
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    animate(group)
# 退出
pygame.quit()