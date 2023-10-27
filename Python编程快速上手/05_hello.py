# 注释
# This program says hello and asks for my name
# print() 输出函数， 字符串作为参数传递，没有参数打印空行
print('Hello,world!')
print('What is your name?')  # ask for their name
# input() 输入函数 返回字符串
myName = input()
print('It is good to meet you,' + myName)
print('The length of your name is: ')
# len() 测量字符串长度 返回整型
print(len(myName))
print('What is your age? ')  # ask for their age
myAge = input()
# + 作为连接符 只能连接字符串
# str()、int()、float() 类型转换函数
print('You will be ' + str(int(myAge) + 1) + 'in a year.')
