# 汽车数量
cars = 100
# 汽车空间
space_in_a_car  = 4.0
# 司机数量
drivers = 30
# 旅客数量
passengers = 90
# 未使用汽车数量
cars_not_driven = cars - drivers
# 汽车司机
cars_drivern = drivers
# 可容纳汽车空间
carpoll_capacity = cars_drivern * space_in_a_car
# 单汽车可容乃旅客
average_passengers_per_car = passengers / cars_drivern


print("There are", cars, "cars available.")
print("There are only", drivers, "drivers available.")
print("There will be", cars_not_driven,"empty cars today.")
print("We can transport", carpoll_capacity,"people today.")
print("We have",passengers,"to carpool today.")
print("We need to put about", average_passengers_per_car,
      "in each car.")