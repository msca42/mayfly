number = int(input("Which multiplication table would you like?\n"))
print("Here is your table: ")
for i in range(1,11):
    print(str(number) + " x " + str(i) + " = " + str(number * i))


