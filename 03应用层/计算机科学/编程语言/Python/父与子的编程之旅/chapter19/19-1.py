import pygame, sys

pygame.init()

screen = pygame.display.set_mode([640,480])

# 创建声音对象
splat = pygame.mixer.Sound("splat.wav")
splat.play()

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

pygame.quit()