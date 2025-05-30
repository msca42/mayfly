# 更多控制流工具

## if 语句

- 格式:
  - if condition:
    - pass
  - elif condition:
    - pass
  - else:
    - pass

## for 语句

- 不迭代算术递增数值，不给予用户定义迭代步骤和结束条件的能力，在任意序列的元素上迭代
- 格式：
  - for 临时变量 in 可迭代对象:
    - pass

## range()函数

- 用于生成等差数列
- range(start,end,step)
  - 从 start 开始到 end-1 结束，步进长度是 step
  - 返回值是一个可迭代对象，只有在迭代时会返回元素项

## break 和 continue 语句

- break 跳出最近一层的循环
- continue 将继续执行循环的下一次迭代

## 循环的 else 子句

- 循环存在 else 子句，在未执行 break 情况下结束循环，执行
- 也就是说提前结束循环都不会执行

## pass 语句

- 不会执行任何动作，仅作为占位符使用

## match 语句

- 接受一个表达式并把它的值与一个或多个 case 块给出的一系列模式进行比较
- 注意点
  - 形似 switch，但是只有第一个匹配的模式会被执行，不会出现穿透现象
  - \_被作为通配符必定会匹配成功
  - | 可以将多个字面值组合到一个模式中
  - 可以提取值的组成部分赋值给变量
    - 当表达式是元组，列表等，提取部分值给语句

## 定义函数

- 格式
  - def 函数名(参数列表):
    - pass
- 变量引用顺序

  - 局部变量符号表、外层函数局部变量符号表、全局符号表、内置名称符号表
  - 实参引入函数中，是按值调用，其中值表示对象的引用
  - 在当前符号表中，函数名与函数对象关联在一起，可以将函数名指代为函数对象

- 返回值
  - return 语句返回函数的值
  - return 不带表达式参数时，返回 None
  - 函数执行完毕退出也返回 None

## 函数定义详解

- 参数分类
  - 位置参数
    - 根据参数传递的顺序
  - 默认值参数
    - 函数定义的时候赋予，可以让调用时使用更少的参数
  - 关键字参数
    - 使用 key-value 形式的参数
    - 函数调用时，关键字参数必须跟在位置参数后面
- 注意事项
  - 当参数列表出现/时，/前方为位置参数后面为位置或关键字
  - \*表示参数仅限关键字参数
- \*args
  - 表示接收元组，该元组包含形式参数之外的位置参数
- \*\*kwargs
  - 表示接收一个字典，包含与函数中已定义形参对应之外的所有关键字参数
- lambda 表达式
  - 用于创建匿名函数
  - lambda a,b:a+b 返回两个参数之和

## 编码风格
