import time 
number = int(input('Countdown timer: How many seconds? '))
for i in range(number,0,-1):
    print(i)
    time.sleep(1)
print("BLAST OFF!")