class Car:
    """一次模拟汽车的简单尝试"""
    def __init__(self,make,model,year):
        """初始化描述汽车的属性"""
        self.make  = make
        self.model = model
        self.year = year
        self.odometer_reading = 0
    
    def get_descriptive_name(self):
        """返回格式规范的描述性信息"""
        long_name = f"{self.year} {self.make} {self.make}"
        return long_name.title()
    
    def read_odometer(self):
        """打印一条指出汽车行驶里程的消息"""
        print(f"This car has {self.odometer_reading} miles on it.")
    
    def update_odometer(self,mileage):
        """将里程表读数设置为指定的值"""
        if mileage >= self.odometer_reading:
            self.odometer_reading = mileage
        else:
            print("You can't roll back an odometer!")
    def increment_odometer(self,miles):
        """让里程表读数增加指定的量"""
        self.odometer_reading += miles

my_new_car = Car('audi','a4',2024)
print(my_new_car.get_descriptive_name())
my_new_car.read_odometer()

# 通过实例修改
# my_new_car.odometer_reading = 23
# 通过方法赋值修改
my_new_car.update_odometer(23)
my_new_car.read_odometer()

# 通过方法增加固定值
my_new_car.increment_odometer(100)
my_new_car.read_odometer()