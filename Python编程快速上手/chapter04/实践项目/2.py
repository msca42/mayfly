import random
numberOfStreaks = 0
hundredNums = []
for experimentNumber in range(10000):
    # Code that creates a list of 100 'head' or 'tails' values.
    num = random.randint(0, 1)
    hundredNums.append(num)
print(hundredNums)
for i in range(9994):
    # Code that checks if there is a streak of 6 heads or tails in a row.
    count0 = 0
    count1 = 1
    for j in range(6):
        if hundredNums[i + j] == 0:
            count0 += 1     
        if hundredNums[i + j] == 1:
            count1 += 1
    if count0 == 6 or count1 == 6:
        numberOfStreaks += 1


print('Chance of streak: %s%%' % (numberOfStreaks/100))
