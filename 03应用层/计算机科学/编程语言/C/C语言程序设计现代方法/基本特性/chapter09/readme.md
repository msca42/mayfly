# 函数
- 函数是C语言的构建块，本质是一个自带声明和语句的小程序
- 主要内容
    - 定义和调用函数
    - 函数的声明
    - 声明和定义的差别
    - 函数中的参数传递
    - return语句
    - 程序终止
    - 递归

## 函数的定义和调用
- 函数定义
    - 格式: 返回类型 函数名(形式参数) 复合语句
    - 注意事项
        - 函数不能返回数组
        - void表示无返回值或无形式参数
        - 省略返回值，C89默认int，C99不合法
        - 如果没有形式参数，使用void
        - 复合语句是函数体，由一对花括号，以及内部的声明和语句组成
        - 可以将返回类型单独一行，这对于冗长的数据类型很有效果
- 函数调用
    - 格式: 函数名(实际参数);
    - 可以使用(void)强制类型转换表示丢掉返回值

## 函数声明
- 函数定义可以在调用之前也可以在调用之后，在调用之后会出现一个问题，main函数中调用函数无法知道函数定义的具体情况，此时编译器会为该函数创建一个隐式声明，但是这种隐式声明不一定准确
- 为了解决定义前调用和隐式声明不准确的问题，C语言提供了函数声明(函数原型)作为解决方案
- 格式: 返回类型 函数名(形式参数);
- 注意事项
    - 函数原型可以不提供形式参数名只提供形式参数类型

## 实际参数
- 实际参数是值传递
    - 在函数执行过程中，对形式参数的改变不会影响实际参数，因为形式参数包含的是实际参数的副本
- 实际参数的转换
    - 根据是否遇到函数原型划分为两种情况
    - 遇到函数原型
        - 隐式转换为相应形式参数的类型
    - 未遇到函数原型
        - 默认实际参数提升
- 数组型实际参数
    - 数组作为实际参数，一维数组可以不提供长度
    - 原型
        - 可以省略形式参数的名字
        - 多维数组必须指定列的数量
    - 调用
        - 第一个参数是数组名，第二个参数是数组的长度
        - 指定数组长度必须要比实际数组长度小或相等，否则会造成访问未定义的情况
    - 传递任意列数的多维数组的方案
        - 省略行不可以省略列的数量
        - 指针数组
        - 变长数组形式参数
    - 论点
        - 函数无法检测传入的数组长度的正确性
        - 函数可以改变数组型形式参数的元素，并且改变会在相应的实际参数中体现出来

- 变长数组形式参数
    - 允许使用非常量表达式指定数组的长度
    - 格式 返回值类型 函数名(类型 长度名， 类型 数组名[长度名]);
        - 其中长度名可以用*代替，表示数组的长度与形式参数列表中前面的参数有关
    - 可以通过定义多个长度维度，实现多维自定义数组参数

- 在数组参数声明中使用static
    - C99允许在数组参数声明中使用关键字static
    - 格式: 返回值类型 函数名(类型 数组名[static 长度值])
    - static表示该数组参数的最小长度，在多维数组中仅可以指定最小行

- 复合字面量
    - C89中，函数调用数组作为参数，可以先声明并初始化数组，然后使用数组名作为参数
    - C99中可以直接使用复合字面量
        - 复合字面量: 通过指定其包含的元素而创建的没有名字的数组
        - 格式: 现在一对圆括号内给定类型名，随后是一个初始化器，用来指定初始值
        - 复合字面量作为左值，其元素可以随意改变，如果只读，需要关键字const

## return语句
- 格式: return 表达式;

## 程序终止
- main函数的返回值是状态码，通常0为正常中止，非0为异常中止
- main函数终止程序的方式有两种
    - return 返回值
    - exit()函数
- 通过stdlib.h头的exit函数也可以返回相同的含义
    - 参数可以为0、EXIT_SUCCESS(0)、EXIT_FAILURE(1)

## 递归
- 如果函数调用其本身，那么此函数就是递归的
- 递归是分治法的结果，所谓分治法就是将一个大问题拆解成诸多小问题，然后采用相同的算法分别解决
- 分治法最经典的案例是快速排序
    - 思路: 选择数组元素e作为分割元素，在e之前的索引元素都小于e，在e之后的索引元素都大于e
    - 如何分割数组
        - 通过low和high两个标记,low指向第一个元素，high指向最后一个元素
        - 首先将low作为分割元素复制到一个临时存储单元，并留出一个空位
        - 从右向左移动high，直到high指向小于分割元素的数停止
        - 然后将这个数复制给low指向的空位，此时high指向的位为空位
        - 从左向右移动low,直到low指向大于分割元素的数停止
        - 循环往复，直到两个标记都指向空位

## 泛型选择
- 实现功能: 同一个名字编写多个函数，实现类似的功能，但是参数和返回类型不同
- 其他高级语言实现机制: 函数重载
- C99使用泛型宏，从C11开始,C标准引入了泛型选择
- 格式: _Generic(控制表达式, 泛型关联列表)
    - 控制表达式: 用于匹配泛型列表中的泛型
    - 泛型关联列表由一个或多个泛型关联组成，如果泛型关联多于一个，它们之间用逗号分隔
    - 泛型关联语法
        - 类型名: 表达式
        - default: 表达式
