while True:
    age = input("please input your age: ")
    if age < 3:
        ticket = 0
    elif age >= 3 and age < 12:
        ticket = 10
    else:
        ticket = 15
