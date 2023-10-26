import pygame, sys

# 初始化
pygame.init()

# 创建窗口
screen = pygame.display.set_mode([640, 480])
#  创建声音对象
# mp3 wma ogg使用load
pygame.mixer.music.load("bg_music.mp3")
pygame.mixer.music.play()


running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
pygame.quit()
