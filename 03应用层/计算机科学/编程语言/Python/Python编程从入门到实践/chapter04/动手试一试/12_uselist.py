my_foods = ['pizza','falafel','carrot cake']
friend_foods = my_foods[:]


my_foods.append('cannoli')
friend_foods.append('ice crea')

print("My favorite foods are:")
for food in my_foods:
    print(food,end=' ')


print("\nMy friend's favorite foods are:")
for food in friend_foods:
    print(food,end=' ')
