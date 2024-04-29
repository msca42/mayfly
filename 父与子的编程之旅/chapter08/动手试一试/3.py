number1 = int(input('Which multiplication table would you like?\n'))
number2 = int(input('How high do you want to go?\n'))
print('Here is your table')
for i in range(1, number2+1):
    print(str(number1) + " x " + str(i) + " = " + str(number1 * i))
