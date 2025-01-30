def collatz(number):
    if number % 2 == 0:
        return number // 2
    else:
        return 3 * number + 1

try:
    number = int(input('Enter number\n'))
    while number != 1:
        number = collatz(number)
        print(number)
except ValueError:
    print('Please input a number')

