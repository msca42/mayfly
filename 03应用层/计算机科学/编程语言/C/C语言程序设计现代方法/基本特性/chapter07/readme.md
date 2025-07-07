# 基本类型

## 整数类型

- 整数类型可以分为有符号整数和无符号整数
  - 默认整型都是有符号
  - 无符号使用 unsigned 修饰、无符号整数主要用于系统编程和底层与机器相关的应用
  - 在 20 章之前,回避无符号类型
- 整数类型还可以分为短整型、整型和长整型，结合符号，一共有六种数据类型
  - short int
  - unsigned short int
  - int
  - unsigned int
  - long int
  - unsigned long int
- C 语言允许通过省略 int 来缩写整型
- C 语言取值范围的要求
  - short、int、long 每个类型必须覆盖一个确定的最小取值范围
  - int 不能比 short 短、long 不能比 int 短
  - 在 64 位机上,short 16 位,int 32 位,long 64 位
  - 确定整数类型的范围:
    - <limits.h> 定义每种整数类型的最大值和最小值的宏
- C99 中的整数类型
  - 新增两种整数类型 long long 和 unsigned long long,至少 64 位
  - 标准有符号整型: short、int、long、long long、signed char
  - 标准无符号整型: unsigned short、unsigned、 unsigned long、unsigned long long、unsigned char、\_Bool
  - 允许在具体实现时定义扩展的整数类型
    - 例如编译器可以提供 128 位的整数类型
- 整数常量
  - 常量: 在程序中以文本形式出现的数
  - C 语言允许使用十进制、八进制和十六进制形式书写整数常量
  - 十进制包含 0~9、不能以 0 开头
  - 八进制包含 0~7、必须以 0 开头
  - 十六进制包含 0~9,A~F、必须以 0x 开头
  - 十进制常量类型: int、long、unsigned long
  - 八进制和十六进制常量类型: int、unsigned int、long、 unsigned long
  - 后缀
    - 强制编译器将常量作为长整型后缀 L
    - 指明无符号常量后缀 U
- C99 中的整数常量
  - 十进制: int、long、long long
  - 八进制或十六进制: int、unsigned int、long、unsigned long、long long、unsigned long long
  - 后缀
    - long long 类型表示 LL 和 ULL
- 整数溢出
  - 有符号溢出，程序行为未定义
  - 无符号溢出,对 2^n 取模,n 表示存储结果的位数
- 读/写整数
  - %d 表示 int 类型
  - %u 表示十进制无符号整数
  - %o 表示八进制无符号整数
  - %x 表示十六进制无符号整数
  - %h 表示短整数
  - %l 表示长整数
  - %ll 表示长长整数

## 浮点类型

- C 语言提供三种浮点数
  - float 单精度浮点数
  - double 双精度浮点数(默认使用)
  - long double 扩展精度浮点数
- 精度标准 IEEE754
  - 组成: 符号、指数、小数
    - 指数说明数值可能的大小
    - 小数说明精度
  - 单精度
    - 32 位: 1 位符号、8 位指数、23 位小数
    - 最大值 3.4x10^8
    - 精度: 6 位十进制数字
  - 分类: 单精度、双精度、单扩展精度、双扩展精度
- <float.h> 定义浮点类型特征的宏
- C99 中分为两种浮点类型
  - 实浮点类型: float、double 和 long double
  - 复数类型: float_Complex、double_Complex、 long double_Complex
- 浮点常量
  - 包含小数点或指数，指数表示对前数进行缩放所需的 10 的幂次，需要在指数前放置 E 可以在 E 后添加正负号
  - 后缀
    - 后缀 f 表示单精度浮点数
    - 后缀 l 表示扩展精度浮点数
- 读/写浮点数
  - %e、%g、%f 表示单精度浮点数
  - %l 表示双精度浮点数
    - printf()函数中不使用
  - %L 表示扩展精度浮点数

## 字符类型

- char 类型变量可以用任意单字符赋值
- 字符操作
  - C 语言中将字符当作小整数进行处理,字符实际上是 int 类型
- 有符号字符和无符号字符
  - 由于 C 语言并没有明确字符类型默认是有符号还是无符号，所以使用 signed 和 unsigned 修饰明确
  - 有符号类型 signed char 取值范围 -128~127
  - 无符号整数 unsigned char 取值范围 0~255
  - C89 整值类型: 整数类型、字符类型、枚举类型
  - C99 整数类型: 整数类型、字符类型、枚举类型、\_Bool 型
- 算术类型
  - 整数类型和浮点类型统称算术类型
  - C89 算术类型
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
  - C99 算术类型
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
      - 问题: 无法表示基本的 128 个 ASCII 字符之外的字符
    - 数字转义序列
      - 可以表示任何字符
      - 转化过程
        - 查找字符对应的八进制或十六进制，使用八进制或十六进制表示
        - 八进制转义序列由字符\和跟随其后的一个最多含有三位数的八进制组成
        - 十六进制转义序列由\x 和跟随其后的一个十六进制数组成
- 字符处理函数
  - 小写字母转换位大写字母方法
    - 通过 ASCLL 编码，减去 a 加上 A 的方式运算得出
    - toupper()函数: 如果参数是小写字母，将小写字母转化为大写字母;否则返回原值
      - 调用函数需要提供包头 ctype.h
- 用 scanf 和 printf 读/写字符
  - 通过转换说明%c 允许 scanf 和 printf 函数对单个字符进行读/写操作
  - scanf 函数在使用%c 时不会跳过空白字符，如果需要跳过空白需要在格式串中%c 之前加上一个空格
- 用 getchar 和 putchar 读/写字符
  - getchar()读入一个字符并将其返回，不会跳过空白字符，返回值是 int 类型
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
  - return 语句中表达式类型与返回值类型不匹配
- 常用算术转换
  - 通常将较狭小类型的操作数转换位另一个操作数的类型
    - 案例:整值提升(把字符或短整数转化为 int 类型)
  - 规则:
    - 任意类型是浮点数
      - 将另外类型转化为浮点数类型
      - float、double、long double
    - 两个类型都不是浮点数
      - 先进行整值提升，然后对类型较狭小的操作数进行提升
      - int、unsigned int、long、unsigned long
- 赋值过程中的转换
  - 将赋值运算符右侧的表达式转换成左侧变量的类型
- C99 中的隐式转换
  - 比 int 小的类型都会先转换为 int 类型
  - 整数提升取代 C89 中的整值提升
- 强制类型转换
  - 格式: (类型名) 表达式
  - 使用场景
    - 避免溢出，手动选择强制转换

## 类型定义

- 格式: typedef 原有类型 新类型
- 类型定义会导致编译器在类型名列表中加入新类型
- 类型定义的优点
  - 便于理解
- 类型定义和可移植性
  - 通过单独的定义可以只修改定义而不是全程序修改，从而增加了可移植性
  - 可以为因为实现不同而创建的不同类型名,通常后缀\_t

## sizeof 运算符

- 允许程序获取存储指定类型的值所需的内存空间
- 格式: sizeof(类型名)
  - 返回值是一个无符号整数,表示存储属于类型名所需的字节数,类型为 size_t
  - size_t 表示系统中最大对象的大小类型
  - 参数可以是类型名、变量、常量和表达式
  - 由于 sizeof 是一元运算符，所以通常后缀()包裹类型名或表达式
- 在 C89 中,显示之前最好将 size_t 强制转化为 unsigned long 类型，转换说明 lu
- 在 C99 中,可以直接显示,转换说明为 zu
