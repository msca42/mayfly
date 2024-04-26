# 记住内存和变量

- 有意思的程序的特点
  - 有输入、处理输入、产生输出

## 输入、处理、输出

- 输入数据保存在内存中
- 算术表达式是数字和符号的结合

```python
print("53 + 28")
print(53 + 28)
```

- 数据的具体位置不需要知道，只需要记住存储变量的名字

```python
5 + 3
First = 5
Second = 3
print(First + Second)
Third = First + Second
```

## 名字里是什么

- 变量的名字由字母、数字和下划线组成
- 命名规则
  - 区分大小写
  - 不能以数字开头，必须以字母或下划线开头
  - 不能包含空格

## 数字和字符串

- 字符和字符序列(字母、数字和标点符号)称为字符串
- Python 中字符串表示为字符两边加引号

```python
teacher = "Mr. Morton"
teacher = 'Mr. Morton'
```

- 字符串拼接就是将两个字符串使用+连接在一起

```python
first = '5'
second = '3'
first + second
```

- 长字符串也叫三重引号字符串，前后使用三个引号包裹

```python
long_string = """Sing a song of sixpence, a pocket full of rye.
Four and twenty blackbirds baked in a pie.
When the pie was opened the birds began to sing.
Wasn't that a dainty dish to set before the king?"""
```

## 它们有多“可变”

- 变量名可以随时更改从而指向不同的数据和类型

## 全新的我

```python
Score = Score
Score = Score + 1
print(Score)
```

- 程序在任何时候都可以对变量重新赋值
