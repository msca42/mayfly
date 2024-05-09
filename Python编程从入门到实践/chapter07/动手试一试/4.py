flag = True
while flag:
    pizza_input = input("please input pizza ingredient or enter quit")
    if pizza_input == 'quit':
        flag = False
    else:
        print(f"add {pizza_input} in pizza")
