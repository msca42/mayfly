# 内置数据类型

## 常见数据类型
- 数字类型: int、float、complex
- 文本序列类型: str
- 序列类型: list、tuple、range
- 映射类型: dict

## 列表
- 定义: 
    - 通过[]存放元素，元素之间使用,分隔
    - 有序可修改
- 内置函数: list()
- 列表推导式: [x for x in range(1,10)]
- 访问
    - 通过索引访问元素
- 删除
    - del 元素
- 常见操作
    - 添加元素
        - insert(index,element)
        - append(element)
        - extend(iterable)
    - 修改元素
        - remove(element)
        - reverse()
        - pop(index)
        - copy()
        - clear()
    - 计算长度
        - len()
        - count()
    - 排序
        - list.sort()
        - sort()
    
## 元组
- 定义:
    - 通过()存放元素，元素之间使用,分隔
    - 有序不可修改
- 内置函数: tuple()
- 删除元组: del

## 集合
- 集合类型包括set和frozenset两种对象类型
- set对象可变,frozenset对象不可变
- 创建
    - 通过{}包裹元素，以,分隔
- 内置函数set()
- 特点
    - 不可重复
    - 无序

## 字典
- 由花括号包含的键值对组成，键不能重复
- 内置类型 dict()
- 删除字典: del
- 内置函数
    - items()、get(key)、values()、keys()
    - len()、pop()、popitem()
    - setdefault(key[,default])
- 新增元素
    - 直接使用键值对新增
- 高级用法
    - 旧字典 |= 新字典  
    - zip() 合并两个列表为一个字典