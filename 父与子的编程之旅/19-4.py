import pygame, sys

pygame.init()
screen = pygame.display.set_mode([640, 480])
pygame.mixer.music.load("bg_music.mp3")
# 调节音乐的音量
pygame.mixer.music.set_volume(0.30)
pygame.mixer.music.play()
splat = pygame.mixer.Sound("splat.wav")
# 调节音效的音量
splat.set_volume(0.50)
splat.play()
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # 检查歌曲是否播放完毕
    if not pygame.mixer.music.get_busy():
        splat.play()
        pygame.time.delay(1000)
        running = False
pygame.quit()
