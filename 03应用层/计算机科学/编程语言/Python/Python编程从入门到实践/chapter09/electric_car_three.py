"""一组可用于表示电动汽车的类"""

from car_three import Car

class Battery:
    """一次模拟电动汽车电池的简单尝试"""
    def __init__(self,battery_size = 40):
        """初始化电池属性"""
        self.battery_size = battery_size
    
    def describe_bettery(self):
        """打印一条描述电池容量的信息"""
        print(f"This car has a {self.battery_size}-kwh battery.")

    def get_range(self):
        """打印一条消息，指出电池的续航里程"""
        if self.battery_size == 40:
            range = 150
        elif self.battery_size == 65:
            range = 225
        
        print(f"This car can go about {range} miles on a full charge.")
class ElectricCar(Car):
    """电动汽车的独特之处"""

    def __init__(self, make, model, year):
        """初始化父类的属性"""
        super().__init__(make, model, year)
        self.battery = Battery()