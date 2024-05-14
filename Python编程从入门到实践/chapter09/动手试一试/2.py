class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"restaurant_name is {self.restaurant_name}")
        print(f"cuisine_type is {self.cuisine_type}")

    def open_restaurant(self):
        print(f"餐馆正在营业")


rest1 = Restaurant('小甲餐厅', '兰州拉面')
rest2 = Restaurant('小乙餐厅', '兰州拉面')
rest3 = Restaurant('小丙餐厅', '兰州拉面')
rest1.describe_restaurant()
rest2.describe_restaurant()
rest3.describe_restaurant()
