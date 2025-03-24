class Restaurant:
    
    def __init__(self,restaurant_name,cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    
    def describe_restaurant(self):
        print(f"restaurant_name:{self.restaurant_name},cuisine_type:{self.cuisine_type}")

    def open_restaurant(self):
        print("餐馆正在营业")


restaurant_one = Restaurant("有间餐厅","中餐厅")
restaurant_two = Restaurant("有个餐厅","中餐厅")
restaurant_three = Restaurant("有所餐厅","中餐厅")
restaurant_one.describe_restaurant()
restaurant_two.describe_restaurant()
restaurant_three.describe_restaurant()
