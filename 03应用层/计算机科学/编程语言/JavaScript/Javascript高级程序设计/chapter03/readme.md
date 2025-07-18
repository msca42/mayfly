# 语言基础

## 语法
- 区分大小写: 变量、函数名、操作符都区分大小写
- 标识符: 
    - 定义: 变量、函数或函数参数的名称
    - 组成 
        - 第一个字符必须是字母、下划线或美元符号
        - 其他字符可以是字母、下划线、美元符号或数字
    - 惯例: 驼峰大小写, 第一个单词首字母小写,后面每个单词的首字母大写
- 注释
    - ECMAScript采用C语言风格,包括单行注释和块注释
    - 单行注释//
    - 块注释/* */
- 严格模式
    - ES5新增,将ES3中的不规范操作指出,并将不安全操作抛出
    - 开启: use strict
    - 注意事项: ES6和Webpack自动应用
- 语句
    - ECMAScript的语句以分号结尾,可以省略但不建议

## 关键字和保留字
- 关键字: 在编程语言中具有特殊用途的字符
- 保留字: 未来的关键字

## 变量
- ES的变量是松散类型
    - 可以保存任何类型的数据
    - 本质是保存任意值的命名占位符
    - 声明关键字: var、const和let
- 声明变量的关键字
    - var
        - 默认初始化undefined
        - 可以在多次赋值的时候改变值的类型,但不推荐
        - 声明作用域
            - 包含它的函数的局部作用域
            - 如果在全局声明,自动成为window对象的属性
            - 在函数内,不使用关键字声明的变量自动提升为全局作用域
        - 定义多个变量时,可以仅使用一个var和多个逗号进行分隔
        - 声明提升
            - 在函数内部,var声明的变量无论在函数什么地方都会自动提升到顶部
            - 可以反复声明同一个变量
    - let
        - 默认初始化undefined
        - 声明作用域
            - 块作用域
            - 块作用域内不允许冗余声明
            - 如果在全局声明,不会成为window对象的属性
        - 暂时性死区
            - let声明的变量不会在其作用域内提升,也就是说要先声明后使用
        - 条件声明
            - 定义: 根据某个条件决定是否声明变量
        - 应用场景
            - 由于let是块作用域，所以在for循环内部使用可以防止迭代变量泄露
    - const
        - 声明时必须初始化变量，并且无法修改指向变量的引用
        - 声明作用域 
            - 块作用域
- 声明风格以及最佳实践
    - 不使用var
    - 先使用const,然后使用let

## 数据类型
- ECMAScript有八种类型包含七种简单类型和一种复杂类型
    - 简单类型: Undefined、Null、Boolean、Number、BigInt、String和Symbol
    - 复杂类型: Object
- typeof 操作符
    - 用于确定数据类型
    - 返回值: undefined、boolean、string、number、object、function、symbol、bigint
    - 注意事项
        - 函数是一种特殊的对象类型
- Undefined 类型
    - 使用var或let声明没有初始化时默认赋值
    - 注意事项
        - 使用未声明的变量会报错
        - 使用typeof操作符对未初始化变量和未声明的变量，返回值都是undefined
- Null 类型
    - 只有一个值null,表示一个空对象指针
    - 使用typeof操作符，返回值为object
    - 由于undefined是从null派生而来，所以ECMA-262定义表面相等，也就是使用==返回true
- Boolean 类型
    - 两个值: true和false
    - 类型转换函数
        - Boolean() 可以将其他类型转换为Boolean类型
        - 转化为false的值: false、""、0、NaN、null、undefined
        - 通常无需转换函数自动转换
- Number 类型
    - 使用IEEE 754格式表示整数和浮点数
    - 整数
        - 字面量格式: 二进制0b、八进制0o、十进制、十六进制0x
    - 浮点数
        - 对于特别大或特别小的浮点数使用科学记数法表示，格式为系数E幂
        - 精度很高，但是在算术运算中不如整数精确
    - 数字间隔符
        - 使用下划线作为分隔符增加数字的可读性
    - 值的范围
        - Number.MIN_VALUE、Number.MAX_VALUE
        - 不在此范围内的统称Infinity
    - NaN 
        - 不是数值,用于表示本来要返回数值的操作失败了
        - NaN不等于包括NaN在内的所有值，通过函数isNaN()判断
    - 类型转换函数
        - Number(): 
        - parseInt()
        - parseFloat()

## 操作符

## 语句

## 函数

## 小结