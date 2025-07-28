class GameObject:
    def __init__(self,name):
        self.name = name
    
    def pickUp(self,player):
        # 将对象添加到玩家的物品集合中
        pass


class Coin(GameObject):
    def __init__(self, value):
        GameObject.__init__(self,"coin")
        self.value = value
    

    def spend(self,buyer,seller):
        # 从买家的钱中扣除硬币
        # 将硬币添加到卖家的钱中
        pass