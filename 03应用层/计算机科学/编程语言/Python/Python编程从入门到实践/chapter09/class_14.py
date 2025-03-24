from random import randint

list_one = [1,2,3,4,5,6,7,8,9,10,'a','b','c','d','e']

for i in range(4):
    number = randint(1,4)
    print(list_one[number])

print("如果字母或数字是上述，你中大奖了")