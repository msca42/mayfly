# 导言

## 入门

- 学习一门新程序设计语言的唯一途径就是使用它编写程序
- 编写 HelloWorld 过程
  - 编写扩展名为 c 的程序文本
  - 编译文本,编译命令 cc
  - 加载运行，生成可执行文件默认名 a.out
  - 输出文本
- 解析
  - C 语言程序是由函数和变量组成，函数包含语句，语句指定要执行的操作，变量用于存储计算过程中的值；C 语言中必须包含 main 函数，它是程序执行的起点；
  - #include <stdio.h> 包含标准输入输出库的信息
  - 函数之间交换数据的方式是通过向被调用函数传递值列表(参数)，格式是在函数名后使用圆括号将参数列表包裹
  - 函数中的语句通过花括号包裹
  - printf()函数是一个打印输出的库函数
  - 使用双引号包裹的字符序列称为字符串或字符串常量
  - \n 表示转义字符、为无法输入的字符或不可见字符提供了一种通用的可扩充机制，常用转义字符: \t 表示制表符、\b 表示回退符、\" 表示双引号、\\表示反斜杠符

## 变量和算术运算符

- 注释的作用是对程序进行解释说明，翼型注释/\*\*/
- 程序中的变量都是先声明后使用，声明通常位于函数起始处，声明的格式由变量名和变量表组成
- 基本数据类型
  - int 整数
  - float 浮点数
  - char 字符(一个字节)
  - short 短整数
  - long 长整型
  - double 双精度浮点数
- while 循环的执行方式
  - 测试圆括号中的条件，如果条件为真，则执行循环体，然后重新测试圆括号中的条件，如果条件为假，循环结束，并继续执行 while 循环之后的一条语句
- 整数的除法将执行舍位操作，也就是去除小数的整除操作
- printf()函数是一个格式化输出函数，从属于标准输入输出库，第一个参数是格式化串，使用%作为占位符表示其他参数，之后的参数是变量名，用以替换格式化串中的占位符。
  - 格式化占位符规则: %m.pX
  - m 表示字符宽度，p 表示小数点后数字数量
  - X 表示具体表示的数据类型
    - d: 十进制整数
    - ld:long 型整数
    - f: 浮点数
    - o: 八进制
    - x: 十六进制
    - c: 字符
    - s: 字符串
    - %: %

## for 语句

- 在允许使用某种类型变量值的任何场合，都可以使用该类型的更复杂的表达式
- for 循环的执行方式
  - 圆括号中共包含三部分，各部分用分号间隔
  - 第一部分初始化部分，仅在进入循环前执行一次
  - 第二部分控制循环的测试或条件部分，如果条件为真，执行循环体，如果条件为假，终止循环
  - 第三部分步长部分，对循环变量进行迭代，在循环体执行之后执行

## 符号常量

- 幻数: 代码中直接使用的具体数值，而没有解释其意义或来源
  - 解决方案: 为它们赋予有意义的名字
  - #define 名字 替换文本
  - define 将符号名(符号常量)定义为一个特殊的字符串
  - 名字与普通变量名的形式相同，都是以字母开头的字母和数字字符序列
  - 替换文本可以是任何字符序列

## 字符输入输出

- 标准输入/输出模型都是按照字符流方式处理
- 文本流是由多行字符构成的字符序列，每行字符由 0 个或多个字符组成，末尾以\n 结尾
- getchar 函数: 从文本流中读入下一个输入字符，并作为结果值返回
  - getchar 有一个特殊返回值 EOF 表示输入结束符，在 stdio.h 内部是一个整数,其值是-1
  - 文件结束标志
    - 在 C 标准库函数 fread 和 fscanf 函数中，返回值 0 表示读取失败或达到文件末尾，返回值 1 或其他值表示成功操作，继续执行
  - 在 macOS 上结束 getchar 函数使用 ctrl+d
- putchar 函数: 打印一个字符
- 字符
  - 字符在机器内部以位模式存储，使用 char 类型表示
- 自增运算符
  - ++表示自增运算符，在操作数前面是前缀，在操作数后面是后缀
  - 此外还存在自减运算符
- 字符常量
  - 单引号字符表示一个整型值，该值等于此字符在机器字符集中对应的数值

## 数组

- 下标从 0 开始，可以是任何整型表达式

## 函数

- 函数为计算机封装提供了一种简单的方法，使用函数不需要考虑它的具体实现，转而关注函数的功能
- 格式: 返回值类型 函数名(0 个或多个参数声明) { 声明部分 语句序列}
- 形式参数: 函数定义中圆括号内列表中出现的变量
- 实际参数: 函数调用中与形式参数对应的值
- 返回值通过 return 返回给调用者，默认 0 表示正常终止
- 函数原型
  - 在 main 函数之前，需要进行一种特殊声明，包含返回值类型，函数名，形式参数列表和分号

## 参数-传值调用

- 所有函数参数都是通过值传递的，也就是说，传递给被调用函数的参数值存放在临时变量中
- 被调用函数不能直接修改主调函数中变量的值，而只能修改其私有的临时副本的值
- 为了让被调函数能够修改主调函数的变量，传递的值是地址值，也就是指向变量的指针
- 对于数组参数，传递的值是起始位置的地址，等同于传递到指针，所以可以修改数组内的数据

## 字符数组

- 一个约定
  - 空字符'\0'位于字符数组的末尾，标记字符串的结束

## 外部变量和作用域

- 局部变量(自动变量):只在函数执行期间存在
- 外部变量:
  - 定义在所有函数之外，只能定义一次
  - 在需要使用外部变量的函数中，使用 extern 语句进行声明
  - 如果外部变量的定义出现在使用它的函数之前，那么在函数中就无需使用 extern 声明
  - 通常将常量和函数的 extern 声明放在一个单独的文件(头文件)中
