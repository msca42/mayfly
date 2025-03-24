class Restaurant:
    
    # 所有属性是否都要在init函数的参数中设置
    def __init__(self,restaurant_name,cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = 0
    
    def describe_restaurant(self):
        print(f"restaurant_name:{self.restaurant_name},cuisine_type:{self.cuisine_type}")

    def open_restaurant(self):
        print("餐馆正在营业")

    def set_number_served(self,numer_served):
        self.number_served = numer_served

    def increment_number_served(self,add_number):
        self.number_served += add_number

class IceCreamStand(Restaurant):
    def __init__(self, restaurant_name, cuisine_type):
        super().__init__(restaurant_name, cuisine_type)
        self.flavors = ['苹果','柠檬']
    
    def show_cuisine_type(self):
        for flavor in self.flavors:
            print(flavor)


iceCreamStand = IceCreamStand("有间餐厅","冰淇凌餐厅")
iceCreamStand.show_cuisine_type()