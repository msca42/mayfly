# 需求: 编写一个程序 查找随机生成的正面和反面列表中出现6个证明或反面的频率
# 第一部分: 随机生成证明和反面的列表
# 第二部分: 检查是否有连胜
# 重复10000次，找出连续的百分比
import random 
numberOfStreaks = 0
for experimentNumber in range(10000):
    resultList = []
    # Code that creates a list of 100 'heads' or 'tails' values
    for i in range(100):
        result = random.randint(0,1)
        resultList.append(result)

    # Code that check if there is a streak of  6 heads or tails in a row,
    heads = 0
    for i in range(100):
        if((i+1)% 6 != 0):
            result += resultList[i]
        if result == 6 or result == 0:
            heads +=1
        result = 0

numberOfStreaks = heads / 100 / 10000
print('Chance of streak: %s%%' %(numberOfStreaks / 100))