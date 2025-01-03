number = int(input("Which multiplication table would you like?\n"))
high_number = int(input("How high do you want to go?\n"))
print("Here is your table: ")
for i in range(1,high_number+1):
    print(str(number) + " x " + str(i) + " = " + str(number * i))


