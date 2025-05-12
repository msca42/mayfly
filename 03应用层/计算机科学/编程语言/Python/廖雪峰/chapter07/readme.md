# 高级特性

## 切片
- 格式: [start:end:step]
- 范围:[start:end)
- 支持范围：列表、元组、字符串

## 迭代
- 通过循环遍历可迭代对象的行为
- Python中for循环表现为for-in
- 迭代字典时
    - 默认迭代key
    - 迭代value方法values()
    - 同时迭代key和value方法items()
- 判断可迭代对象    
    - collections.abc模块的Iterable类型
    - isinstance(对象，Iterable)
- 下标循环
    - enumerate函数

## 列表生成式
- 创建列表的生成式
- 格式：[ 表达式 for 变量 in 可迭代对象 if 条件 ]

## 生成器
- 作用: 按需生成值（惰性计算），而不是一次性生成所有值, 节约资源
- 格式: 
    - 生成器表达式（ 表达式 for 变量 in 可迭代对象 if 条件 ）
    - 生成器函数
        - 在函数中存在yield关键字
        - 运行机制
            - 每次调用next()时执行，遇到yield语句返回，再次执行时从上次返回的yield语句处执行
- 返回值是一个生成器对象，需要使用next()获取下一个返回值或者通过for循环获取对象中元素的值
    - 当for循环最后获取generator的返回值，会StopIteration的错误，需要捕获


## 迭代器
- 可以被next()函数调用并不断返回下一个值的对象
- 判断迭代器对象    
    - collections.abc模块的Iterator类型
    - isinstance(对象，Iterator)
- 使用iter()函数可以将Iterable变成Iterator
