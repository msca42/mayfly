# 查找随机生成的正面和反面列表中出现连续6个正面或6个反面的频率
# 循环10000次
# 生成随机选择的正面和反面
# 检查是否有连胜
import random
numberOfStreaks = 0
for experimentNumber in range(10000):
    htlist = []
# Code that creates a list of 100 'heads' or 'tails' values.
    for i in range(100):
        if random.randint(0,1) == 0:
            htlist.append('H')
        else:
            htlist.append('T')            
# Code that checks if there is a streak of 6 heads or tails in a row.
    streak = 1
    for i in range(1, len(htlist)):
        if htlist[i] == htlist[i - 1]:
            streak += 1
        else:
            streak = 1

        if streak == 6:
            numberOfStreaks += 1
            break
        
        
print('Chance of streak: %s%%' % (numberOfStreaks / 100))

