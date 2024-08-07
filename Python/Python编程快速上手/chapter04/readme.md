# 列表
- 介绍列表数据类型
- 解释如何组织数据

## 列表数据类型

- 列表是一个包含由多个值构成的序列，使用[]表示
- 通过索引可以获取、修改列表中的表项，
- 列表支持负数索引
- 通过切片可以获取子列表
  - [start,end]
- 通过 len()函数可以获取列表的长度
- 列表的连接和复制操作可以通过+和\*实现
- 使用 del 可以删除列表中的值

## 使用列表

- in 和 not in 判断值是否在列表中
- enumerate()函数: 返回两个值:列表中的表项的索引，列表中表项本身
- random.choice()函数: 返回一个随机选择的表项
- random.shuffle()函数: 对表项重新排序，就地修改

## 增强的赋值操作

- 本质就是复合赋值，将算术运算符和赋值运算符混合

## 方法

- 方法是另一种函数，只在值上调用，每个值从属于一种数据类型，方法本质是数据类型的函数
- 常见列表方法
  - index(): 传入一个值，如果该值存在于列表中，返回它的索引，不在列表中，ValueError 错误
  - append(): 末尾添加数据
  - insert(): 任意位置添加数据
  - remove(): 将传入的值从列表中删除
  - sort(): 排序，关键字参数 reverse=True 逆序
    - 遵循原则:ASCII 默认、关键字参数 key = str.lower 按照字典顺序
  - reverse() 反转列表

## 序列

- Python 序列数据类型包含列表、字符串、由 range()返回的范围对象以及元组
- Python 序列操作:
  - 按索引取值
  - 切片
  - for 循环
  - len()循环
  - in、not in
- 可变数据类型
  - 列表
- 不可变数据类型
  - 元组、字符串
- 元组: 与列表相似，不同的是使用()表示
  - 如果括号内只有一个值，后面跟上一个逗号
- type(): 查看数据类型函数
- list(): 列表内置函数
- tuple(): 元组内置函数

## 引用

- 变量存储的是对计算机内存位置的引用，这些位置存储了值
- id(): 查看值的唯一标识，返回存储值的内存地址
- 如果想要传递的参数不改变，可以使用 copy 模块
  - copy()函数: 复制列表或字典，而非复制引用
  - deepcopy()函数: 在 copy()的基础上复制内部列表

## 小结
- 介绍列表和序列
- 变量保存的是引用，使用引用的时候，可以使用copy()函数和deepcopy()函数