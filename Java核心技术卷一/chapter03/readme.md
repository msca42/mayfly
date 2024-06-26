# Java 的基本程序设计结构

## 一个简单的 Java 程序

```java
public class FirstSample {
  public static void main(String[] args) {
    System.out.println("We will not us 'Hello World!'");
  }
}
```

- public: 访问修饰符，用于控制程序的其他部分对于这段代码的访问级别
- class: 表示 Java 程序的全部内容包含在类中
- 类名规则:字母开头，后面字母和数字的组合，长度无限制，不能使用保留字，类名使用大驼峰
  - 源文件名和公共类名相同
- 编译源代码之后生成字节码文件，使用 java 命令加载运行
- 每个程序都必须有一个 main 方法
- {} 表示方法体的开始和结束
- System.out 对象调用 println 方法参数是字符串

## 注释

- Java 中包含三种标记注释的方式
  - // 单行注释
  - /\*\*/ 多行注释
  - /\*\* \*/ 文档注释

## 数据类型

- Java 是一种强类型语言
  - 使用前必须明确声明变量的类型，且在运行过程中不能改变
- 八种基本类型
  - 整型
    - Java 提供四种整型:int、short、long、byte
    - 长整型后缀 L，十六进制数前缀 0x,八进制数前缀 0，二进制数前缀 0b
    - 数字字面量加下划线区分易读
  - 浮点型
    - Java 提供两种浮点类型:float、double
    - 单精度后缀 f
    - 浮点数规范 IEEE754
  - char 类型
    - 使用 1 ～ 2 个 char 类型值表示单个字符
    - 使用单引号括起来
    - 可以表示十六进制值，范围\u0000 ～\uFFFF
    - Unicode 与 char 类型
      - 在 Unicode 之前，编码和地区强绑定，同一个字符编码值不同，编码长度不同
      - 1991 年，Unicode1.0 发布，采用 16 位编码方式，也就是 UTF-16,每个字符都使用两个字节表示
      - 设计 Java 时，char 类型采用了 UTF-16 方案
      - 后来随着表意文字的加入，16 位的 char 类型无法满足所有 Unicode 字符
      - Java 的解决措施
        - 首先明确一点，字符要映射为代码值才能在计算机中显示,Java 中的代码值称为码点
        - 在 Unicode 标准中，码点采用十六进制书写，前缀 U+
        - Unicode 码点可以分为 17 个代码平面，第一个代码平面称为基本多语言平面，包含 U+0000~U+FFFF，其余 16 个代码平面从 U+10000 到 U+10FFFF
        - UTF-16 采用不同长度的代码表示所有 Unicode 码点，在基本多语言平面，每个字符使用 16 位表示，称为代码单元，辅助字符编码使用一对代码单元表示
      - 在 Java 中，char 类型描述了采用 UTF-16 编码的一个代码单元
    - boolean 类型
      - 两个值 true 和 false
      - 整数值和布尔值不能相互转换

## 变量和常量

- 声明变量
  - 变量类型 变量名;
  - 变量名标识符规则: 字母、数字、货币符号以及"标点连接符"组成，第一个符号不能是数字
    - 字母: 一种语言中表示字母的任何 Unicode 字符
    - 数字: 0 ～ 9 和表示一位数字的任何 Unicode 字符
    - 货币符号: $、¥、€
    - 标点连接符: 下划线、波浪线以及其他符号
    - 不要使用$和\_
- 初始化变量
  - 声明变量后必须用赋值语句初始化变量
  - 在 Java 中，变量的声明尽可能靠近第一次使用的地方
- 常量
  - 使用 final 修饰的变量称为常量, 只能被赋值一次
  - 类常量: 可以在一个类的多个方法中使用的常量，使用 static final

## 运算符

- 算术运算符
  - Java 使用+、-、\*、/表示加减乘除四则运算
  - 当操作数都是整数类型时，/表示整除，当操作数有浮点类型时，/表示浮点除法
- Math 函数与常量
  - 函数
    - Math.sqrt()方法: 求平方根
    - Math.pow()方法: 求幂方
    - Math.floorMod()方法: 求余数，偶数为 0，正奇数为 1，负奇数为-1
    - Math.round()方法: 舍入
  - 常量
    - Math.PI
- 数值类型之间的转换
  - 取值范围小的自动向取值范围大的转换
  - 整数向浮点数转换可能有信息丢失
- 强制类型转换
  - 取值范围大的类型向取值范围小的类型转换的过程称为强制类型转换
  - 格式: (目标类型) 待转换变量名
- 赋值运算符
  - 赋值运算符可以分为一元=和二元复合赋值
  - 复合赋值运算符自带强制类型转换