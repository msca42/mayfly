while True:
    number_one = input("input first number")
    number_two = input("input first number")
    try:
        number_one = int(number_one)
        number_two = int(number_two)
    except ValueError:
        print("This input is not number")
    else:
        break

