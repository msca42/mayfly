# 改造倒计时程序1
num_time = int(input("Countdown timer: How many seconds?"))
import time

for i in range(num_time, 0, -1):
    print(i)
    time.sleep(1)
print("BLAST OFF!")
# 改造倒计时程序2
num_time = int(input("Countdown timer: How many seconds?"))

for i in range(num_time, 0, -1):
    print(i, end='')
    for j in range(i):
        print("* ", end='')
    print()
    time.sleep(1)
print("BLAST OFF!")
