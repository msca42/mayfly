# This program says hello and asks for my name. 注释
print('hello,world!') # print() 输出函数
print('What is your name') # ask for their name
myName = input() # input() 输入函数
print('It is good to meet you, ' + myName)
print('The length of your name is:')
print(len(myName)) # len() 计算字符串中字符的个数
print('What is your age?') #ask for their age
myAge = input()
print('You will be ' + str(int(myAge) + 1) + ' in a year.')