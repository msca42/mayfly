import random

totals  = [0,0,0,0,0,0,0,0,0,0,0,0,0]
for i in range(1000):
    die1 = random.randint(1,6)
    die2 = random.randint(1,6)
    dice_total = die1 + die2
    totals[dice_total] += 1

for i in range(2,13):
    print("total",i,"camp up", totals[i],"times")