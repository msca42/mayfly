# 程序设计语言

## 目标
- 描述从机器语言到高级语言的编程语言演化
- 理解如何使用解释器或编译器将高级语言中的程序翻译成机器语言
- 区分4种计算机语言模式
- 理解过程式模式和在模式中程序单元与数据项间的交互
- 理解面向对象模式和在这种模式中程序单元与对象间的交互
- 定义函数式模式，理解它的应用
- 定义声明式模式，理解它的应用
- 定义过程式和面向对象语言中的常见概念

## 演化 
- 机器语言
    - 使用0和1组成
    - 是计算机唯一识别的语言
    - 不同计算机的机器语言不同
        - 指令集架构ISA不同，分类
            - CISC-X86
            - RISC-ARM
- 汇编语言
    - 使用助记符和符号的指令和地址代替二进制代码
- 高级语言
    - 高级语言可以转化为机器语言，这个转化过程称为解释或编译

## 翻译
- 源程序: 高级语言程序
- 目标程序: 机器语言程序
- 编译: 把源程序翻译成目标程序
- 解释:
    - 第一种方法: 
        - 把源程序中的每一行翻译成目标程序中相应的行，并执行它的过程
    - 第二种方法:
        - Java将源程序翻译成目标程序的过程分为编译和解释两个阶段
- 翻译过程
    - 编译和解释的翻译过程一致，区别在于编译是整个源代码，解释是单行
    - 源代码 - 词法分析器 -  语法分析器 - 语义分析器 - 代码生成器 - 目标文件
    - 词法分析器
        - 一个符号接一个符号地读源代码
        - 创建源语言中的助记符表
    - 语法分析器
        - 分析一组助记符
        - 找出指令
    - 语义分析器
        - 检查语法分析器创建的句子，确保意思的唯一性
        - 生成可编码指令
    - 代码生成器
        - 每条指令转化为机器语言

## 编程模式
- 可分为四种模式: 过程式、面向对象、函数式、声明式
- 过程式
    - Fortran、COBOL、BASIC、C、Pascal、Ada
    - 程序：主动主体
    - 数据: 被动对象
    - 过程: 程序发出动作
    - 文件: 被动对象集合
- 面向对象
    - Smalltalk、C++、Visual Basic、C#、Java
    - 特点
        - 类、方法、继承性、多态性
- 函数式
    - LISP、Scheme
    - 程序被看成一个数学函数，是一个黑盒
    - 实现以下功能
        - 预定义一系列可供任何程序员调用的原始函数
        - 允许程序员通过若干原始函数组合创建新的函数
- 声明式
    - Prolog
    - 依据逻辑推理的原则响应查询

## 共同概念
- 过程式和面向对象模式的共同概念
- 标识符
    - 对象的名称
    - 可以让编译器根据标识符追踪数据实际存放的物理地址
- 数据类型
    - 定义一系列值及应用于这些值的一系列操作
    - 每种数据类型值的集合称为数据类型的域
    - 通常定义了两类数据类型: 简单数据类型和复合数据类型
    - 简单数据类型
        - 整数类型
        - 实数类型
        - 字符类型
        - 布尔类型
    - 复合数据类型
        - 数组类型
        - 记录类型
- 变量
    - 变量是存储单元的名字
    - 使用变量需要先声明和初始化
- 字面值
    - 程序中使用的预定义的值
- 常量
    - 值在程序开始处被定义后就不能该改变
- 输入和输出
    - 数据或通过语句，或通过预先定义的函数来完成
- 表达式
    - 由一系列操作数和运算符简化后的一个单一数值
    - 运算符
        - 用来完成一个动作的特定语言的语法记号
        - 算术运算符
            - 加减乘除
            - 取余、递增、递减
        - 关系运算符
            - 小于、小于等于、大于、大于等于、等于、不等于
        - 逻辑运算符
            - 非、与、或
    - 操作数
        - 接收一个运算符的动作
- 语句
    - 赋值语句
    - 复合语句
        - 也称为代码块
    - 控制语句
        - 语句默认是一句接一句执行，但是有时候需要改变这种顺序执行的情况
        - 在机器语言中，使用jump指令
        - 早期使用goto模拟
        - 结构化编程中使用三种结构: 顺序、选择、循环
        - 选择
            - 可以分为两路和多路选择
            - 两路选择if-else
            - 多路选择switch-case
        - 循环
            - 3种类型的循环
                - while循环
                - for循环
                - do-while循环
- 子程序
    - 相当于函数
    - 内部变量称为局部变量，参数称为形式参数，返回值设计成返回一个或多个值
    - 程序通过传值和传引用两种方式传递参数
        - 传值: 传递的是实际的值
        - 传引用: 传递的是地址，本质是子程序和主程序共享数据