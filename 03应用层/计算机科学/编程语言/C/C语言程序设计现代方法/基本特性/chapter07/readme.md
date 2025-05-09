# 基本类型
- 数值类型可以分为整数类型和浮点数类型
- 主要内容  
    - 整型
    - 浮点型
    - 字符型
    - 类型转换
    - 定义新类型名
    - 计算类型存储空间

## 整数类型
- 整数类型可以分为有符号整数和无符号整数
    - 默认整型都是有符号
    - 无符号使用unsigned修饰、无符号整数主要用于系统编程和底层与机器相关的应用
    - 在20章之前,回避无符号类型
- 整数类型还可以分为短整型、整型和长整型，结合符号，一共有六种数据类型
    - short int
    - unsigned short int
    - int 
    - unsigned int
    - long int
    - unsigned long int 
- C语言允许通过省略int来缩写整型
- C语言取值范围的要求
    - short、int、long 每个类型必须覆盖一个确定的最小取值范围
    - int不能比short短、long不能比int短
    - 在64位机上,short 16位,int 32位,long 64位
    - 确定整数类型的范围:
        - <limits.h> 定义每种整数类型的最大值和最小值的宏
- C99中的整数类型
    - 新增两种整数类型long long 和unsigned long long,至少64位
    - 标准有符号整型: short、int、long、long long、signed char
    - 标准无符号整型: unsigned short、unsigned、 unsigned long、unsigned long long、unsigned char、_Bool
    - 允许在具体实现时定义扩展的整数类型
        - 例如编译器可以提供128位的整数类型
- 整数常量
    - 常量: 在程序中以文本形式出现的数
    - C语言允许使用十进制、八进制和十六进制形式书写整数常量
    - 十进制包含0~9、不能以0开头
    - 八进制包含0~7、必须以0开头
    - 十六进制包含0~9,A~F、必须以0x开头
    - 十进制常量类型: int、long、unsigned long
    - 八进制和十六进制常量类型: int、unsigned int、long、 unsigned long
    - 后缀
        - 强制编译器将常量作为长整型后缀L
        - 指明无符号常量后缀U
- C99中的整数常量
    - 十进制: int、long、long long
    - 八进制或十六进制: int、unsigned int、long、unsigned long、long long、unsigned long long
    - 后缀
        - long long类型表示LL和ULL
- 整数溢出
    - 有符号溢出，程序行为未定义
    - 无符号溢出,对2^n取模,n表示存储结果的位数
- 读/写整数
    - %d表示int类型
    - %u表示十进制无符号整数
    - %o表示八进制无符号整数
    - %x表示十六进制无符号整数
    - %h表示短整数
    - %l表示长整数

## 浮点类型
- C语言提供三种浮点数
    - float 单精度浮点数
    - double 双精度浮点数(默认使用)
    - long double 扩展精度浮点数
- 精度标准IEEE754
    - 组成: 符号、指数、小数
        - 指数说明数值可能的大小
        - 小数说明精度
    - 单精度
        - 32位: 1位符号、8位指数、23位小数
        - 最大值 3.4x10^8
        - 精度: 6位十进制数字
    - 分类: 单精度、双精度、单扩展精度、双扩展精度
- <float.h> 定义浮点类型特征的宏
- C99中分为两种浮点类型
    - 实浮点类型: float、double和long double
    - 复数类型: float_Complex、double_Complex、 long double_Complex
- 浮点常量
    - 包含小数点或指数，指数表示对前数进行缩放所需的10的幂次，需要在指数前放置E可以在E后添加正负号
    - 后缀
        - 后缀f表示单精度浮点数
        - 后缀l表示扩展精度浮点数
- 读/写浮点数
    - %e、%g、%f表示单精度浮点数
    - %l表示双精度浮点数
        - printf()函数中不使用
    - %L表示扩展精度浮点数

## 字符类型
- char类型变量可以用任意单字符赋值
- 字符操作
    - C语言中将字符当作小整数进行处理,字符实际上是int类型
- 有符号字符和无符号字符
    - 由于C语言并没有明确字符类型默认是有符号还是无符号，所以使用signed和unsigned修饰明确
    - 有符号类型 signed char 取值范围 -128~127
    - 无符号整数 unsigned char 取值范围 0~255
    - C89整值类型: 整数类型、字符类型、枚举类型
    - C99整数类型: 整数类型、字符类型、枚举类型、_Bool型
- 算术类型
    - 整数类型和浮点类型统称算术类型
    - C89算术类型
        - 整值类型
            - 字符数型
                - char
            - 有符号整型 
                - signed char、short、int、long
            - 无符号整型 
                - unsigned char、unsigned short、unsigned int、unsigned long
            - 枚举类型
        - 浮点类型
            - float、double、long double
    - C99算术类型
        - 整数类型
            - 字符数型
                - char
            - 有符号整型 
                - signed char、short、int、long、long long、扩展
            - 无符号整型 
                - unsigned char、unsigned short、unsigned int、unsigned long、unsigned long long、扩展
            - 枚举类型
        - 浮点类型
            - 实数浮点
                - float、double、long double
            - 复数类型
                - float_Complex、double_Complex、long double_Complex
- 转义序列
    - 用于表示非打印字符
    - 可以分为字符转义序列和数字转义序列
        - 字符转义序列
            - 可以直接用字符表示
            - 问题: 无法表示基本的128个ASCII字符之外的字符
        - 数字转义序列
            - 可以表示任何字符
            - 转化过程
                - 查找字符对应的八进制或十六进制，使用八进制或十六进制表示
                - 八进制转义序列由字符\和跟随其后的一个最多含有三位数的八进制组成
                - 十六进制转义序列由\x和跟随其后的一个十六进制数组成
- 字符处理函数
    - 小写字母转换位大写字母方法
        - 通过ASCLL编码，减去a加上A的方式运算得出
        - toupper()函数: 如果参数是小写字母，将小写字母转化为大写字母;否则返回原值
            - 调用函数需要提供包头ctype.h
- 用scanf和printf读/写字符
    - 通过转换说明%c允许scanf和printf函数对单个字符进行读/写操作
    - scanf函数在使用%c时不会跳过空白字符，如果需要跳过空白需要在格式串中%c之前加上一个空格
- 用getchar和putchar读/写字符
    - getchar()读入一个字符并将其返回，不会跳过空白字符，返回值是int类型
    - putchar()写入单个字符
- 读入并忽略当前行所有字符
```C
do {
    scanf("%c",&ch);
} while(ch !='\n');

while(getchar()!='\n'){}
```

## 类型转换
- 对于计算机而言，算术运算要求操作数有相同的大小(位的数量相同)，并且要求存储的方式也相同
- 对于编程语言而言，可以将不同类型的数据整合到一个表达式中，通过类型转化将表达式整合成统一类型，类型转化可以分为**显式**和**隐式**
- 隐式转换有四种情况
    - 算术表达式或逻辑表达式中操作数类型不同时
    - 赋值运算符右侧表达式与左侧表达式不同时
    - 函数调用中实参类型与形参类型不匹配
    - return语句中表达式类型与返回值类型不匹配
- 常用算术转换
    - 通常将较狭小类型的操作数转换位另一个操作数的类型
        - 案例:整值提升(把字符或短整数转化为int类型)
    - 规则:
        - 任意类型是浮点数
            - 将另外类型转化为浮点数类型
            - float、double、long double
        - 两个类型都不是浮点数
            - 先进行整值提升，然后对类型较狭小的操作数进行提升
            - int、unsigned int、long、unsigned long
- 赋值过程中的转换
    - 将赋值运算符右侧的表达式转换成左侧变量的类型
- C99中的隐式转换   
    - 比int小的类型都会先转换为int类型
    - 整数提升取代C89中的整值提升
- 强制类型转换
    - 格式: (类型名) 表达式

## 类型定义
- 格式: typedef  原有类型 新类型
- 类型定义会导致编译器在类型名列表中加入新类型
- 类型定义的优点
    - 便于理解
- 类型定义和可移植性
    - 通过单独的定义可以只修改定义而不是全程序修改，从而增加了可移植性
    - 可以为因为实现不同而创建的不同类型名,通常后缀_t

## sizeof运算符
- 允许程序获取存储指定类型的值所需的内存空间
- 格式: sizeof(类型名)
    - 返回值是一个无符号整数,表示存储属于类型名所需的字节数,类型为size_t
    - size_t表示系统中最大对象的大小类型
    - 参数可以是类型名、变量、常量和表达式
- 在C89中,显示之前最好将size_t强制转化为unsigned long类型
- 在C99中,可以直接显示,不过转换说明为zu

