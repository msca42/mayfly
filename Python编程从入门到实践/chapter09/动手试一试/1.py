class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"restaurant_name is {self.restaurant_name}")
        print(f"cuisine_type is {self.cuisine_type}")

    def open_restaurant(self):
        print(f"餐馆正在营业")


rest = Restaurant('小甲餐厅', '兰州拉面')
print(rest.restaurant_name)
print(rest.cuisine_type)
rest.describe_restaurant()
rest.open_restaurant()
