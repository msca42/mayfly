# Python基础
- 任何一种语言都有自己的一套语法，编译器或解释器就是负责把符合语法的程序代码转换成CPU能够执行的机器码，然后执行
- Python使用缩进来组织代码块

## 数据类型和变量
- Python可以直接处理的数据类型包括: 整数、浮点数、字符串、布尔值、空值
- 整数 
    - 计算机使用二进制表示数字
    - 四位二进制数字可以使用十六进制表示，前缀0x
    - 对于很大的数，可以使用_在数字中间分隔
    - 计算精确
- 浮点数
    - 通常使用科学计数法表示
    - 计算存在四舍五入的情况
- 字符串
    - 以单引号或双引号括起来的任意文本
    - 可以使用转义字符表示无法表示的字符
    - 使用r''默认内部字符串不转义
    - 允许用'''...'''的格式表示多行内容
- 布尔值
    - 只有True和False两个值
    - 可以通过and、or、not进行运算
- 空值
    - 空值是一个Python中一个特殊的值，用None表示
- 变量
    - 变量不仅可以是数字还可以是任意数据类型
    - 在程序中变量用一个变量名表示
    - 变量名命名规则
        - 大小写英文、数字和_的组合
        - 不能以数字开头
    - 等号 = 是赋值语句，可以把任意数据类型赋值给变量
- 动态语言: 变量类型不固定的语言
- 静态语言: 在定义变量时必须指定变量类型
- 变量在内存中的表示
    - a = 'ABC'
    - 创建一个'ABC'的字符串
    - 创建一个名为a的变量，并把它指向'ABC'
- 常量
    - 常量表示不能变的变量，通常全部用大写的变量名表示
    - Python没有任何机制保证常量
- 除法为什么精确
    - Python有两种除法: 除法和整除

## 字符串和编码
- 计算机只能处理数字，如果要处理文本，必须将文本转换为数字
- 最初的计算机只有127个字符被编码进计算机，这个编码表被称为ASCII编码，各个国家出于本国文字的需要在此之上创建了符合需要的单独编码，这就造成在多语言混合文本中出现乱码的可能
- 为了解决乱码的问题，Unicode字符集诞生
    - 最常用的UCS-16编码，用两个字节表示一个字符
    - 存在问题: Unicode可以表示所有字符，但是在存储和传输存在浪费问题
- UTF-8
    - 可变长编码
    - 把一个Unicode字符根据不同的数字大小编码成1～6个字节
    - 通常英文一个字节、汉字3个字节，生僻字4～6个字节
- ASCII、Unicode和UTF-8关系
    - 在内存中使用Unicode编码
    - 需要保存到硬盘或传输时转换为UTF-8编码
        - 使用bytes类型表示，具体而言使用b''表示
        - bytes的每个字符都只占用一个字节
- Python3中字符串使用Unicode编码
    - ord()函数获取字符的整数表示
    - chr()函数把编码转换为对应的字符
    - 如果知道字符的整数编码，可以使用\u十六进制编写
    - str通过encode()方法编码为指定的bytes
    - 字节流可以通过decode()方法转换为str
- len()函数:
    - 计算str的字符数
    - 计算bytes的字节数
- 格式化输出字符串
    - 方式一: 采用和C语言一致的方式，用%实现
        - 在字符串内部使用%?作为占位符
        - 在字符串外部使用%字符串或%元组作为替换内容
        - %d整数、%f浮点数、%s字符串、%x十六进制整数
    - 方式二: 使用字符串的format()方法
        - 传入参数依次替换字符串内的占位符{number}
    - 方式三: 使用以f开头的字符串，称为f-string
        - 在占位符{}中可以使用:格式化参数
## 使用list和tuple
- list 
    - 有序集合
    - 使用[]包裹元素
    - 使用索引访问元素
    - 插入元素
        - append() 追加元素
        - insert() 插入元素
    - 删除元素
        - pop() 删除指定位置元素
    - 替换元素
        - 通过赋值给对应索引
## 条件判断

## 模式匹配

## 循环

## 使用dict和set