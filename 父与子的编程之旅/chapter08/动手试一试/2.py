number = int(input("Which multiplication table would you like?\n"))
print("Here is your table:")
i = 1
while i < 11:
    print(number," x ",i ," = ", number * i)
    i += 1
