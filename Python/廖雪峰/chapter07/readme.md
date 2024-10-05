# 高级特性

## 切片
- [start:end:step], [start:end)

## 迭代
- 给定一个list或tuple之类的可迭代对象，使用for循环遍历，这种遍历方式就是迭代
- 对于字典
    - 默认情况dict迭代的是key
    - 如果要迭代value,可以使用dict.values()
    - 如果同时迭代key和value，可以使用dict.items()
- 下标循环函数
    - enumerate()函数

## 列表生成式
- [元素表达式 循环 循环体]


## 生成器
- 创建生成器的方法
    - 将列表生成式的[]改为()
    - 调用一个包含yield关键字的函数，返回一个generator
- 输出生成器数据
    - next()函数
- generator函数执行顺序
    - 每次调用next()的时候执行，遇到yield语句返回，再次执行时从上次返回的yield语句处继续执行

## 迭代器
- 可迭代对象(Iterable)包含集合数据类型和generator
- 如何判断一个对象是可迭代对象或迭代器
    - 通过collections.abc模块的Iterable类型判断
    - isinstance(待判断数据，Iterable) 判断可迭代对象
    - isinstance(待判断数据，Iterator) 判断迭代器对象
- 迭代器(Iterator)
    - 可以被next()函数调用并不断返回下一个值的对象
- 说明
    - 生成器都是Iterator对象
    - 集合数据类型都是Iterable对象，可以通过iter()函数将集合数据类型转化为Iterator对象
    - Python的Iterator对象是一个数据流，可以被next()函数调用并不断返回下一个数据，直到StopIteration错误，可以把数据流看作有序序列。
    - for循环的本质是不断调用next()函数
