# 基本类型

## 整数类型

- 整型可以分为有符号整型和无符号整型，通过 signed 和 unsigned 修饰，也可以分为长整型和短整型，通过 long 和 short 修饰
- 将说明符组合起来可以有 6 种不同的类型
  - signed short int
  - unsigned short int
  - signed int
  - unsigned int
  - signed long int
  - unsigned long int
- 取值范围
  - 每一种数据类型根据机器的不同取值范围不同
  - 编译器规则
    - short、int、long 必须覆盖一个确定的最小取值范围
    - int 类型不能比 short 短，long 类型不能比 int 短
    - short 类型范围可能和 int 一样，int 类型范围可能和 long 一样
- C99 新增两种标准数据类型: signed long long int 和 unsigned long long int,
  - 标准有符号整型: short、int、long、long long、char
  - 标准无符号整型: unsigned short、unsigned int、unsigned long 、unsigned long long、unsigned char, \_Bool
  - 扩展整数类型: 在具体实现时定义
- 常量
  - 在程序中以文本形式出现的数,有十进制、八进制和十六进制
  - 数据在计算机内部都是以二进制存储的
  - 编译器规则
    - 十进制: int、long int、unsigned long int
    - 八进制和十六进制: int、unsigned int、long int、unsigned long int
    - 强制编译器按照长整型处理方式: 后缀 L
    - 强制编译器按照无符号处理方式: 后缀 U
    - 强制编译器按照 long long int 处理方式: 后缀 LL
    - C99
      - 十进制: int、long int、long long int
      - 八进制和十六进制: int、unsigned int、long int、unsigned long int、long long int、unsigned long long int
- 整数溢出

  - 操作数是有符号数，程序行为未定义
  - 操作数是无符号数，对 2^n 取模，n 表示用于存储结果的位数

- 读写函数中的转换指定符
  - 无符号整数: 将整数d更换为 u 十进制、o 八进制、x 十六进制
  - 短整数: hd
  - 长整型: ld
  - 长长整型: lld

## 浮点类型

- 分类
  - C 语言中提供三种浮点类型: float、double、long double
  - C99 新增复数类型即在原三种类型上加上复数，并将原先三种划分归实浮点类型
  - 默认使用 double 类型
- 常量
  - 必须包含小数点或指数
  - 指数指明了对前面的数进行缩放所学的 10 的幂次
  - 格式: 小数 E(符号)指数
- 编译器规则
  - 使用 float，后缀 f
  - 使用 long double，后缀 L
- 读写转换符
  - %e、%f、%g 用于单精度浮点数
  - 在转换符之前加上 l 用于在 scanf 函数中的双精度浮点数，C99 允许在 printf 函数中使用 l
  - 在转换符之前机上 L 用于扩展精度浮点数

## 字符类型

- 不同的计算机有不同的字符集，char 类型因此不同
  - 最常见的字符集是 ASCII，使用 7 位表示 128 个字符，后续扩展为 8 位表示 256 个字符
- char 类型变量可以用任意单字符赋值，使用单引号
- char 类型可以分为有符号字符和无符号字符，有符号字符范围-128 ～ 127，无符号字符 0 ～ 255，使用 signed 和 unsigned 修饰
- 注意事项

  - 由于字符的表示都是二进制编码，所以在 C 语言中把字符当作小整数进行处理，字符常量实际上是 int 类型而不是 char 类型
  - C89 采用整值类型统称整数类型和字符类型，亦包括枚举
  - C99 扩展了整数类型的含义，包含字符类型、枚举类型和\_Bool

- 算术类型
  - 整数类型和浮点数类型统称算术类型
  - C89
    - 整数类型
      - 字符类型 char
      - 有符号整型 signed char、short int、int、long int
      - 无符号整型 unsigned char、unsigned short int、unsigned int、unsigned long int
      - 枚举类型
    - 浮点数类型 float、double、long double
  - C99
    - 整数类型
      - 字符类型 char
      - 有符号整型 signed char、short int、int、long int、long long int
      - 无符号整型 unsigned char、unsigned short int、unsigned int、unsigned long int、unsigned long long int、\_Bool 和扩展的
      - 枚举类型
    - 浮点类型
      - 实数浮点数 float、double、long double
      - 复数类型 float_Complex、double_Complex、long double_Complex
- 转义类型
  - 用于表示一些特殊字符，如不可见的非打印字符或无法从键盘输入的字符
  - 分类
    - 字符转移序列 包含最常用的字符
      - 警报符\a
      - 回退符\b
      - 换页符\f
      - 回车符\r
      - 水平制表符\t
      - 垂直制表符\v
      - 反斜杠\\
      - 问号 \?
      - 单引号 \'
      - 双引号 \"
    - 数字转移序列 可以表示任何字符
      - 八进制转义字符
        - 格式: \跟随三个数字的八进制数组成，表示无符号字符
      - 十六进制转义字符
        - 格式: \x 跟随一个十六进制数
- 字符处理函数

  - toupper 库函数
    - 检测参数是否为小写字母，如果是，将会把参数转换为相应大写字母，否则会返回对应参数的值
    - 调用函数需要在顶部载入函数库 ctype.h

- 使用 scanf 和 printf 函数读写字符
  - 转换说明%c 可以实现
  - 注意事项
    - scanf 不会跳过空格，如果非要跳过空格在%c 之前加上空格
- 使用 getchar 和 putchar 函数读写字符
  - getchar 会返回一个 int 类型的值
  - 应用场景: 搜索字符的循环和跳过字符的循环

## 类型转换

- 计算机底层执行算术运算操作数的大小和存储方式要相同
- C 语言可以混合整数、浮点数和字符进行运算，运算过程中需要将数据转换为统一的类型
- 隐式转换: 编译器自动处理转换
  - 策略: 通过整值提升，把操作数转换成同时匹配这两个操作数的最狭小的数据类型
  - 算术表达式或逻辑表达式中操作数的类型不同(常规算术转换)
    - C89 规则
      - 任一操作数是浮点数的情况，将较狭小的操作数提升为浮点数类型: float、double、long double
      - 两个操作数的类型都不是浮点数的情况，对操作数进行整值提升: int、unsigned int、long int、unsigned long int
    - C99 规则
      - 使用整数提升取代整值提升，可以用任何等级低于 int 类型的类型转换为 int 类型或unsigned int
      - 任一操作数是浮点数的情况与 C89 一致
      - 两个操作数的类型都不是浮点数的情况
        - 对操作数进行整数提升，如果提升后的类型相同，结束
        - 如果操作数都是有符号或无符号，将低等级操作数转换为高等级操作数
        - 如果无符号操作数高于有符号，将有符号转换为无符号类型
        - 如果有符号操作数可以表示无符号操作数类型的所有值，将无符号操作数转换为有符号操作数类型
        - 否则，将两个操作数转换为与有符号操作数相对应的无符号类型
  - 赋值运算符右侧表达式类型与左侧表达式类型不匹配
    - 把赋值运算符右边的表达式转换成左边变量的类型
  - 函数调用实参类型与形参类型不匹配
  - return 语句中表达式类型和函数返回值类型不匹配

- 显式转换:
  - 格式 (类型名) 表达式

## 类型定义

- 布置布尔类型的方法

  - 宏: #define BOOL int
  - 类型定义特性: typedef int Bool;

- 采用 typedef 定义 Bool 会导致编译在它所识别的类型名列表中加入 Bool, 此时 Bool 类型可以和内置的类型名一样用于变量声明、强制类型转换表达式

- 优点: 使程序更加易于理解、易于修改、增加可移植性

- C 语言自身使用 typedef 创建的类型名通常以\_t 结尾

## sizeof 运算符

- 允许程序获取存储指定类型的值所需要的内存空间
- 格式: sizeof (类型名)
- 返回值是一个无符号整数(size_t 类型)，表示存储属于类型名的值所需的字节数
- 可以应用于类型名、常量、变量和表达式
- C89中需要将size_t类型转换为unsigned long类型 使用转换说明%lu
- C99中printf可以直接显示size_t类型值，使用转换说明%zu
