# 控制流
- 布尔数据类型
    - 只有两个值True和False
- 比较操作符(关系操作符)
    - == 等于
    - != 不等于
    - <  小于
    - > 大于
    - <= 小于等于
    - >= 大于等于
- 布尔操作符
    - 结果由真值表决定
    - and:一假为假
    - or:一真为真
    - not:取反
- 控制流语句由条件和代码块组成
    - 条件为一个布尔值，用于决定代码块是否执行
    - 代码块规则
        - 缩进增加时，代码块开始
        - 代码可以包含其他代码块
        - 缩进减少为零，代码块结束
- 常见控制流语句
    - if语句: 如果条件为真，执行子句中的代码
        - if关键字 条件 冒号 缩进代码块
    - else语句: 如果条件为假，执行else子句
        - else关键字 冒号 缩进代码块
    - elif语句: 在if语句之外，提供另一个条件选择
        - elif关键字 条件 冒号  缩进代码块
    - while语句: 条件循环执行代码块
        - while关键字 条件 冒号 缩进代码块
    - break语句: 执行break语句就会立马退出循环
    - continue语句: 执行continue语句就会马上跳回循环开始处
    - for语句: 次数循环执行代码块
        - for关键字 变量名 in关键字 range()函数 冒号 缩进代码块
        - range()函数
            - 参数: start、end、step

- 模块
    - Python中的模块分为标准库和第三方库
    - 导入模块
        - import关键字 模块的名称
        - from 模块名 import 函数名称

- 结束程序
    - sys模块的exit()函数
    
