def collatz(number):
    if (number % 2 == 0):
        print(number // 2)
        return number//2
    else:
        print(number * 3  + 1)
        return number * 3 + 1

print('please input a number')
try:
    number = int(input())
    while True:
        number = collatz(number)
        if number == 1:
            break
except ValueError:
    print('please input a number')
