# 4.5 创建一个包含数1～100万的列表，再使用min()和max()核实该列表是从1开始到100万结束，另外对这个列表调用sum()
numbers = [i for i in range(1,1000001)]
print(min(numbers))
print(max(numbers))
print(sum(numbers))