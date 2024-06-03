gender = input("please input children gender")
if gender == "f":
    age = int(input("please input your age"))
    if 10 <= age <= 12:
        print("you can join in")
    else:
        print("Your age out of our standard")
else:
    print("we are finding girl")
