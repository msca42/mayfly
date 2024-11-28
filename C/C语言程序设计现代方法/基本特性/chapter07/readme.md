# 基本类型
## 整数类型
- 整数类型可以分为有符号整数和无符号整数
    - 默认整形都是有符号
    - 无符号使用unsigned修饰
- 整数类型还可以分为短整型、整型和长整型，结合符号，一共有六种数据类型
    - short int
    - unsigned short int
    - int 
    - unsigned int
    - long int
    - unsigned long int 
- 确定整数类型的范围:
    - <limits.h> 定义每种整数类型的最大值和最小值的宏
- C99中的整数类型
    - 新增两种整数类型long long int和unsigned long long int
    - 允许在具体实现时定义扩展的整数类型
    - 标准有符号整型: short int、int、long int、long long int、signed char
    - 标准无符号整型: unsigned short int、unsigned int、 unsigned long int、unsigned long long int、unsigned char 
- 整数常量
    - 常量: 在程序中以文本形式出现的数。C语言允许使用十进制、八进制和十六进制形式书写整数常量
    - 十进制常量类型: int、long int、unsigned long int
    - 八进制和十六进制常量类型: int、unsigned int、long int、 unsigned long int
    - 后缀
        - 强制编译器将常量作为长整型后缀L
        - 指明无符号常量后缀U
- C99中的整数常量
    - 十进制: int、long int、long long int
    - 八进制或十六进制: int、unsigned int、long int、unsigned long int、long long int、unsigned long long int
    - 后缀
        - LL和ULL
- 整数溢出
    - 有符号溢出，程序行为未定义
    - 无符号溢出，对2^n取模，其中n表示存储结果的位数
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
    - %L表示扩展精度浮点数
## 字符类型
- char类型变量可以用任意单字符赋值
- 字符操作
    - C语言中将字符当作小整数进行处理
- 有符号字符和无符号字符
    - 有符号类型 signed char 取值范围 -128~127
    - 无符号整数 unsigned char 取值范围 0~255
    - C89整值类型: 整数类型、字符类型、枚举类型
    - C99整数类型: 整数类型、字符类型、枚举类型、_Bool型
- 算术类型
    - 整数类型和浮点类型统称算术类型
    - C89算术类型
        - 整值类型
            - 字符数型char
            - 有符号整型 
                - signed char、short int、int、long int、long long int
            - 无符号整型 
                - unsigned char、unsigned short int、unsigned int、unsigned long int、unsigned long long int
            - 枚举类型
        - 浮点类型
    - C99在C89的基础上新增了整型扩展类型和浮点复数类型
- 转义序列
    - 用于表示非打印字符
    - 可以分为字符转义序列和数字转义序列
        - 字符转义序列
            - 可以直接用字符表示
            - 问题: 无法表示基本的128哥ASCII字符之外的字符
        - 数字转义序列
            - 可以表示任何字符
            - 转化过程
                - 查找字符对应的八进制或十六进制，使用八进制或十六进制表示
                - 八进制转义序列由字符\和跟随其后的一个最多含有三位数的八进制组成
                - 十六进制转义序列由\x和跟随其后的一个十六进制数组成
- 字符处理函数
    - toupper()函数: 如果参数是小写字母，将小写字母转化为大写字母;否则返回原值
        - 调用函数需要提供包头ctype.h
- 用scanf和printf读/写字符
    - 通过转换说明%c允许scanf和printf函数对单个字符进行读/写操作
    - scanf函数不会跳过空白字符，
- 用getchar和putchar读/写字符
    - getchar()读入一个字符并将其返回，不会跳过空白字符
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
- 对于编程语言而言，可以将不同类型的数据整合到一个表达式中，通过类型转化将表达式整合成统一类型，类型转化可以分为显式和隐式
- 常用算术转换
    - 整值提升: 把字符或短整数转化为int类型
    - 任意类型是浮点数
        - 将另外类型转化为浮点数类型
    - 两个类型都不是浮点数
        - 先进行整值提升，然后对类型较狭小的操作数进行提升
- 赋值过程中的转换
    - 将赋值运算符右侧的表达式转换成左侧变量的类型
- C99中的隐式转换   
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
    - 可以为因为实现不同而创建的不同类型名
## sizeof运算符
- 允许程序获取存储指定类型的值所需的内存空间
- 格式: sizeof(类型名)
    - 返回值是一个无符号整数,表示存储属于类型名所需的字节数,类型为size_t
    - 参数可以是类型名、变量、常量和表达式
- 在C89中,显示之前最好将size_t强制转化为unsigned long类型
- 在C99中,可以直接显示,不过转换说明为zu