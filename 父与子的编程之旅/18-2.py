import pygame, sys

pygame.init()
screen = pygame.display.set_mode([640, 480])
background = pygame.Surface(screen.get_size())
background.fill([255, 255, 255])
clock = pygame.time.Clock()


class Ball(pygame.sprite.Sprite):
    def __init__(self, image_file, speed, location):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file)
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        self.speed = speed

    def move(self):
        if self.rect.left <= screen.get_rect().left or \
                self.rect.right >= screen.get_rect().right:
            self.speed[0] = - self.speed[0]
        newpos = self.rect.move(self.speed)
        self.rect = newpos


my_ball = Ball('beach_ball.png', [10, 0], [20, 20])
# 重复按键之间需要等待事件
delay = 100
# 按键的重复频率
interval = 50
# 处理重复按键
pygame.key.set_repeat(delay, interval)
running = True
while running:
    # 从事件队列获取包含所有事件的列表
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        # 检查按键
        elif event.type == pygame.KEYDOWN:
            # 如果是UP按键
            if event.key == pygame.K_UP:
                my_ball.rect.top = my_ball.rect.top - 10
            # 如果是DOWN按键
            elif event.key == pygame.K_DOWN:
                my_ball.rect.top = my_ball.rect.top + 10

    clock.tick(30)
    screen.blit(background, (0, 0))
    my_ball.move()
    screen.blit(my_ball.image, my_ball.rect)
    pygame.display.flip()
pygame.quit()
