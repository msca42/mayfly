import time
number = int(input('Countdown timer: How many second?'))
for i in range(number, 0, -1):
    print(str(i) + " * " * number)
    time.sleep(1)
print("BLAST OFF!")
