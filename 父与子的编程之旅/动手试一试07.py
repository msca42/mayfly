# 降价促销 金额小于等于10元9折，大于等于10元8折
money = float(input("please input pay money"))
if money <= 10:
    money *= 0.9
else:
    money *= 0.8
print(f"End price is {money}")

# 10～12岁女孩足球队，询问年龄和性别
gender = input("Please input child gender from m and f")
if gender == "f":
    age = int(input("please input child age"))
    if 10 <= age <= 12:
        print("You can join in")
else:
    print("child gender is not girl, sorry")

# 刚到加油站是否加油下一个加油站200km
size_tank = int(input("please input size of tank"))
percent_full = int(input("please input how much oil in tank in percent"))
km_per_liter = int(input("please input each oil can run km"))
away_km = size_tank * percent_full / 100 * km_per_liter
print(f"Size of tank: {size_tank} \n percent full: {percent_full}\n km per liter: {km_per_liter}"
      f"\nYou can go another{away_km}.\n"
      f"The next gas station is 200km away.")
if away_km > 200:
    print("You can wait for the next station.")
else:
    print("Get gas now!")

# 输入正确密码使用程序
password = "12345"
flag = input("please input weather you know password with Y and N")
if flag == "Y":
    guess = input("please input password")
    if guess == password:
        print("You're in")
    else:
        print("You're not in")
else:
    re = input("You can ask me with Ask or guess with Guess")
    if re == "Ask":
        print("You're in")
    elif re == "Guess":
        guess = input("please input password")
        if guess == password:
            print("You're in")
        else:
            print("You're not in")
    else:
        print("your input is mistake")
