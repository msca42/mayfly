# 导入模块
import pygame, sys, random

# 图片列表
skier_images = ["skier_down.png","skier_right1.png",
                "skier_right2.png","skier_left2.png",
                "skier_left1.png"]

# 创建类
class SkierClass(pygame.sprite.Sprite): # 创建滑雪者
    
    # 初始化 image rect  rect.center angle
    def __init__(self):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load("skier_down.png")
        self.rect = self.image.get_rect()
        self.rect.center = [320,100]
        self.angle = 0
    
    # turn 函数
    def turn(self, direction): # 滑雪者转向
        self.angle = self.angle + direction
        if self.angle < -2 : self.angle = -2
        if self.angle > 2 : self.angle = 2
        center = self.rect.center
        self.image = pygame.image.load(skier_images[self.angle])
        self.rect = self.image.get_rect()
        self.rect.center = center
        speed = [self.angle, 6 - abs(self.angle) * 2]
        return speed

    # move 函数
    def move(self,speed): # 滑雪者左右移动
        self.rect.centerx = self.rect.centerx + speed[0]
        if self.rect.centerx < 20: self.rect.centerx = 20
        if self.rect.centerx > 620: self.rect.centerx = 620

# 创建树和小旗
class ObstacleClass(pygame.sprite.Sprite): 
    # 初始化
    def __init__(self,image_file,location,obs_type):
        pygame.sprite.Sprite.__init__(self)
        self.image_file = image_file
        self.image = pygame.image.load(image_file)
        self.rect = self.image.get_rect()
        self.rect.center = location
        self.obs_type = obs_type
        self.passed = False
    
    # update
    def update(self):  # 更新场景
        global speed
        self.rect.centery -= speed[1]
        if self.rect.centery < -32:  # 删除障碍物
            self.kill()
    
# 创建窗口，随机树和小旗
def create_map():
    global obstacles 
    locations = []
    for i in range(10):
        row = random.randint(0,9)
        col = random.randint(0,9)
        location = [col * 64  + 20, row * 64 + 20 + 640]
        if not (location in locations):
            locations.append(location)
            obs_type = random.choice(["tree","flag"])
            if obs_type == "tree": img = "skier_tree.png"
            elif obs_type == "flag": img = "skier_flag.png"
            obstacle = ObstacleClass(img,location,obs_type)
            obstacles.add(obstacle)

# 重绘屏幕
def animate():
    screen.fill([255,255,255])
    obstacles.draw(screen)
    screen.blit(skier.image,skier.rect)
    screen.blit(score_text,[10,10])
    pygame.display.flip()

pygame.init()
screen = pygame.display.set_mode([640,640])
clock = pygame.time.Clock()
skier = SkierClass()
speed = [0,6]
obstacles = pygame.sprite.Group()
map_position = 0
points = 0
create_map()
font =  pygame.font.Font(None,50)   


running = True
while running:
    clock.tick(30)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                speed = skier.turn(-1)
            elif event.key == pygame.K_RIGHT:
                speed = skier.turn(1)
    skier.move(speed)

    map_position  += speed[1]

    if map_position >= 640:
        create_map()
        map_position = 0
    
    hit = pygame.sprite.spritecollide(skier,obstacles,False)
    if hit:
        if hit[0].obs_type == "tree" and not hit[0].passed:
            points = points - 100
            skier.image = pygame.image.load("skier_crash.png")
            animate()
            pygame.time.delay(1000)
            skier.image = pygame.image.load("skier_down.png")
            skier.angle = 0
            speed = [0,6]
            hit[0].passed = True
        elif  hit[0].obs_type == "flag" and not hit[0].passed:
            points += 10
            hit[0].kill()
        
    
    obstacles.update()
    score_text = font.render("Socre: "+  str(points),1,(0,0,0))
    animate()

pygame.quit()