import pygame
import sys
pygame.init()

screen = pygame.display.set_mode([640, 480])

splat = pygame.mixer.Sound("splat.wav")
splat.play()

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
          running = False
pygame.quit()
