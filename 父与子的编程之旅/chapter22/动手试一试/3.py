import pickle

name = input("please input your name: ")
age = input("please input your age: ")
color = input("please input your favorite color: ")
food = input("please input your favorite food: ")

info_list = []
info_list.append(name)
info_list.append(age)
info_list.append(color)
info_list.append(food)

pickle_file = open('my_pickled_list.txt', 'wb')
pickle.dump(info_list, pickle_file)
pickle_file.close()
