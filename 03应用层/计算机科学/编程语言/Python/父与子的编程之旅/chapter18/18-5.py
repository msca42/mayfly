import pygame, sys

class Ball(pygame.sprite.Sprite):
    def __init__(self, image_file, speed, location):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file)
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        self.speed = speed
    
    def move(self):
        global score, score_surf, score_font
        self.rect = self.rect.move(self.speed)
        if self.rect.left < 0 or self.rect.right > screen.get_width():
            self.speed[0] = - self.speed[0]
        
        if self.rect.top  <= 0:
            self.speed[1] = - self.speed[1]
            score = score + 1
            score_surf  = score_font.render(str(score),1,(0,0,0))

class Paddle(pygame.sprite.Sprite):
    def __init__(self, location = [0,0]):
        pygame.sprite.Sprite.__init__(self)
        image_surface = pygame.surface.Surface([100,20])
        image_surface.fill([0,0,0])
        self.image  = image_surface.convert()
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top  = location


pygame.init()
screen = pygame.display.set_mode([640,480])
clock = pygame.time.Clock()
ball_speed = [10,5]
myBall = Ball('wackyball.bmp',ball_speed,[50,50])
ballGroup = pygame.sprite.Group(myBall)
paddle = Paddle([270,400])
lives = 3
score = 0
score_font = pygame.font.Font(None,50)
score_surf = score_font.render(str(score),1,(0,0,0))
score_pos = [10,10]
done = False
running = True
while running:
    clock.tick(30)
    screen.fill([255,255,255])
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.MOUSEMOTION:
            paddle.rect.centerx = event.pos[0]
    if pygame.sprite.spritecollide(paddle,ballGroup,False):
        myBall.speed[1] = - myBall.speed[1]
    myBall.move()
    if not done:
        screen.blit(myBall.image,myBall.rect)
        screen.blit(paddle.image,paddle.rect)
        screen.blit(score_surf,score_pos)
        for i in range(lives):
            width = screen.get_width()
            screen.blit(myBall.image,[width - 40 * i,20])
        pygame.display.flip()
    if myBall.rect.top >=  screen.get_rect().bottom:
        lives = lives - 1
        if lives == 0:
            final_text1 = "Game Over"
            final_text2 = "Your final score is: " + str(score)
            ft1_font = pygame.font.Font(None,70)
            ft1_surf = ft1_font.render(final_text1,1,(0,0,0)) 
            ft2_font = pygame.font.Font(None,50)
            ft2_surf = ft1_font.render(final_text2,1,(0,0,0))
            screen.blit(ft1_surf,[screen.get_width()//2 - \
                                  ft1_surf.get_width()//2,100])
            screen.blit(ft2_surf,[screen.get_width()//2 - \
                                  ft2_surf.get_width()//2,100])
            pygame.display.flip()
            done = True
        else:
            pygame.time.delay(2000)
            myBall.rect.topleft = [50,50]
pygame.quit()

