# 控制流

## 布尔值
- 只有两个值:True和False

## 比较操作符
- 用于比较两个值，返回值为布尔类型
- 清单: ==、!=、<、>、<=、>=

## 布尔操作符
- 清单: and、or、not
- 根据接收表达式的数量，判断是几元操作符
- and 如果两个布尔值表达式都是True，求值结果就是True
- or  只要有一个布尔值为真，or操作符就将表达式求值为True
- not 一元操作符，求值为相反的布尔值

## 混合布尔和比较操作符
- 比较操作符的返回结果是布尔值，可以作为布尔操作符的输入

## 控制流的元素
- 控制流语句由条件和子句代码块组成
- 条件总是可以规约为一个布尔值，通过条件可以控制子句的执行
- 代码块由一组代码组成，在Python中根据缩进来判断开始和结束


## 程序执行
- 执行当前指令，默认从上往下顺序执行，通过控制流可以改变执行顺序

## 控制流语句
- if语句
    - 如果条件是True执行,否则跳过子句
    - if 条件 冒号 缩进代码块
- else语句
    - 当if条件是False时执行
    - else 冒号 缩进代码块
- elif语句
    - 当if条件是False且elif条件是True执行
    - elif 条件 冒号 缩进代码块
- while循环语句
    - 条件为True时,子句执行，跳回条件判断，当条件为False时,跳出循环
    - while 条件 冒号 缩进代码块
- break语句
    - 中断循环
- continue语句
    - 跳出当前循环，继续下一次循环    
- for循环
    - 执行固定次数的循环
    - for 变量名 in 循环参数列表 冒号 缩进代码块
    - range()函数
        - 参数start、end、step 
        - 生成循环参数列表
        - 左闭右开，start是开始的值，end是上限，但不包含
- 注意事项
    - 关于条件的真假
        - 在用于条件时，0,0.0,''空字符串被认为是False，其他值被认为是True

## 导入模块
- Python包含一组基本函数称为内置函数，可以直接调用
- Python还包含一组模块，称为标准库，需要通过import语句导入才可以使用
- 格式1: import 模块名
- 格式2: form 模块名 import 函数名(*)


## 用sys.exit()函数提前结束程序
- 导入sys模块，使用exit()函数可以终止程序

## 小程序: 猜数字

## 小程序: 石头、纸、剪刀

## 小结
- 布尔类型
- 比较操作符
- 布尔操作符
- 流程控制语句
    - if..elif..else
    - while
    - for
    - break
    - continue

## 习题
- True、False
- and、or、not
- and: True True True
- or : False False False
- not: True False
- False、False、True、False、False、True
- ==、!=、>、<、>=、<=
- =和==区别前者表示赋值，后者表示比较
- 条件就是一个布尔值，在流程控制中需要使用
- 三个print()
```python
# 9
spam = 0
if spam == 1:
    print('Hello')
elif spam == 2:
    print('Howdy')
else:
    print('Greetings')
```
- ctrl + C
- break中断循环执行循环之后的语句
- continue 跳过当前循环继续下一次循环
- 没有区别
```python
# 13
for i in range(1,10):
    print(i)

i = 0
while i <=10:
    print(i)
```
- from spam import bacon
