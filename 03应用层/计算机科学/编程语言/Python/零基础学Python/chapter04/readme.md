# 判断与循环

## if语句
- 条件判断的语句: if
- 格式: 
    - if condition: pass
    - elif condition: pass
    - else: pass

## match语句
- 格式:
    - match status:
        - case status: pass
        - case _: pass 
- 注意事项
    - _表示通用匹配符
    - 通过| 可以组合多个status 

## while循环
- 格式:
    - while 循环条件: pass
- 循环退出的方法
    - 循环结束，正常退出
    - 执行错误，异常退出
    - 使用标志退出
    - 使用break，continue语句退出
    - 条件不满足，不执行循环
    - 死循环，不退出

## for循环
- 格式
    - for 存储对象元素的变量 in 对象
- 使用for循环实现推导式
    - 支持类型: 列表、字典、元组、集合
    - 格式:
        - 表达式 for 变量 in 序列 if 条件