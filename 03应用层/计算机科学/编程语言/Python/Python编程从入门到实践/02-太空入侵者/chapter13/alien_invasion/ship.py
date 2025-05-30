import pygame

class Ship:
    """管理飞船的类"""

    def __init__(self,ai_game):
        """初始化飞船并设置其初始位置"""
        self.screen = ai_game.screen
        self.screen_rect = ai_game.screen.get_rect()
        self.settings = ai_game.settings

        # 加载飞船图像并获取其外接矩形
        self.image = pygame.image.load('images/ship.bmp')
        self.rect = self.image.get_rect()

        # 设置飞船初始位置
        self.rect.midbottom  = self.screen_rect.midbottom

        # 设置左右距离为浮点数
        self.x = float(self.rect.x)

        # 移动标志
        self.moving_right = False
        self.moving_left = False
    
    def update(self):
        """根据移动标志调整飞船的位置"""
        # 更新飞船属性x而非矩形属性x
        # 矩形无法处理浮点数 
        # 增加距离限制
        if self.moving_right and self.rect.right < self.screen_rect.right:
            self.x += self.settings.ship_speed
        if self.moving_left and self.rect.left > 0:
            self.x -= self.settings.ship_speed

        # 根据飞船属性更新矩形
        self.rect.x = self.x

    def blitme(self):
        """在指定位置绘制飞船"""
        self.screen.blit(self.image,self.rect)