number = int(input("Which multiplication table would you like?\n"))
print("Here is your table: ")
i = 0
while i<=10: 
    print(str(number) + " x " + str(i) + " = " + str(number * i))
    i += 1

