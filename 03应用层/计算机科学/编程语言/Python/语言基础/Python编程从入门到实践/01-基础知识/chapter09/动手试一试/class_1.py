class Restaurant:
    
    def __init__(self,restaurant_name,cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    
    def describe_restaurant(self):
        print(f"restaurant_name:{self.restaurant_name},cuisine_type:{self.cuisine_type}")

    def open_restaurant(self):
        print("餐馆正在营业")


restaurant = Restaurant("有间餐厅","中餐厅")
restaurant.describe_restaurant()
restaurant.open_restaurant()