# 操作列表

## 遍历整个列表

- 通过 for 循环遍历
  - for 参数 in 可迭代对象

## 避免缩进错误

## 创建数值列表

- Python 用于处理数值列表的工具很多
- range()函数
  - 参数: start、end、step
  - 生成一系列的数,从 start 到 end-1
  - 类型 range
  - 通过内置函数 list()可以转化为列表
- 统计函数
  - min()
  - max()
  - sum()
- 列表推导式
  - 一行代码生成列表
  - 将 for 循环和创建新元素的代码合并
  - 组成
    - 表达式: 用于生成要存储到列表中值
    - for 循环,给表达式提供值
    - 判断条件: 可选
  - [expression for item in iterable if (condition)]

## 使用列表的一部分

- 切片: 处理列表的部分元素
  - 指定第一个元素和最后一个元素的索引，从 start 到 end-1
  - [:]可以复制列表

## 元组

- 存储不可修改的元素，也就是说元组是不可变列表
- 单个元组需要在括号内使用逗号

## 设置代码格式

- 格式设置指南 PEP8

## 小结

- 介绍列表
