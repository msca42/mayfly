number = int(input("Which multiplication table would you like?\n"))
max = int(input("How high do you want to go?\n "))
print("Here is your table:")
i = 1
while i < max + 1:
    print(number," x ",i ," = ", number * i)
    i += 1
