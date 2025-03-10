# Python编程基础知识

## 输入输出
- 输入函数input()
- 输出函数print()

## 变量
- 变量: 临时存储数据的地方
- 格式: 变量名 = 值
- 注意事项
    - 赋值运算符可以连续使用
    - 多重赋值，可以同时对多个不同变量赋不同的值，变量和值的数量相等

## 字符串
- 使用引号包裹的字符序列
- 类型函数: str()
- 在字符串中使用变量
    - f-string: f"{}"
- 基本操作
    - 成员运算 in、not in
    - 连接运算 +、*
    - 切片 [start:end] 包含start不包含end
- 常用方法
    - str.count(sub[,start[,end]])
    - str.isalnum()
    - str.isalpha()
    - str.join(iterable)
    - str.split(sep=None)
    - str.startwith(prefix[,start[,end]])

## 数字类型
- 整数、浮点数、复数
- 运算符
    - +、-、*、/、//、%
- 函数
    - 类型函数: int()、float()
    - type():获取对象类型
- 注释
    - \#开头 

## 变量的命名
- 只包含字母、数字、下划线且数字不能开头
- 不能包含空格、不能使用关键字
- 简单、描述性强
- 大小写敏感、多个单词使用_连接