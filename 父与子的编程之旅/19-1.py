import pygame, sys

# 初始化
pygame.init()

# 创建窗口
screen = pygame.display.set_mode([640, 480])
# 创建声音对象
# wav文件，使用Sound
splat = pygame.mixer.Sound("splat.wav")
# 播放声音
splat.play()

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
