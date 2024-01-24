```python
# 表达式
 2 + 2
```
- 表达式
  - 包括**值**和**操作符**，并且总是可以归约为单个值
  - 没有表达式的单个值也称可以称为表达式
- 操作符
  - ** 指数
  - % 取模
  - // 整除
  - / 除法
  - \* 乘法
  - \- 减法
  - \+ 加法
- 数据类型
  - 一类值的集合
  - 常见的数据类型
    - 整型、浮点型、字符串
- 变量
  - 变量的本质是是一个存储数据的容器
  - 变量名规则
    - 只能是一个词，不带空格
    - 只能包含字母、数字和下划线字符
    - 不能以数字开头
- 补充资源
  - 通过Python Tutor 可以可视化的查看程序执行情况

```python
# This program says hello and asks for my name.
print('Hello,world!')
print('What is your name?') # ask for their name
myName = input()
print('It is good to meet you, ' + myName)
print('The length of your name is :')
print(len(myName))
print('What is your age?') # ask for their age
myAge = input()
print('You will be ' + str(int(myAge) + 1) + ' in a year.')
```
- 解析
  - \#表示Python的注释 
  - print() 输出函数
  - input() 输入函数，返回值是字符串
  - len() 获取字符串中字符的个数
  - 类型转换函数
    - str()、int()、float()