flag = True

while flag:
    prompt = input("if you want to quit, please input quit,otherwise enter enter")
    if prompt == 'quit':
        break
    age = int(input("please input your age"))
    if age < 3:
        price = 0
    elif age < 12:
        price = 10
    else:
        price = 15
    print(f"price is {price}")
