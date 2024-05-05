import random
numberOfStreaks = 0
for experimentNumber in range(10000):
    # Code that creates a list of 100 'heads' or 'tails' values.
    hundredCoin = []
    for i in range(100):
        if random.randint(0, 1) == 0:
            hundredCoin.append(0)
        else:
            hundredCoin.append(1)
# Code that checks if there is a streak of 6 heads or tails in a row.
    for i in range(95):
        if hundredCoin[i] == hundredCoin[i+1] == hundredCoin[i+2] == hundredCoin[i+3] == hundredCoin[i+4] == hundredCoin[i+5]:
            numberOfStreaks += 1
    numberOfStreaks /= 95
print('Chance of streak: %s%%' % (numberOfStreaks / 100))
