# 二进制

- 表示
  - 一个二进制可以表示 0 和 1 两个数字，多个二进制可以表示更多的数字
  - 二进制是基于 2 的，也就是以点做侧为起始表示 1，每靠左一位基数乘以 2
- 加法
  - 逢 2 进 1
- 容量
  - 通常将 8 位表示为一个字节
- 位系统
  - 通常有这么几种，8，16，32，64
  - 表示计算机一次处理的数据容量
- 内存
  - 计算机通常会给内存的每个位置一个标记，记作位置地址，通过位址可以存取数据
  - 最大内存 = 2^位数
    - 32 位对应 4GB
    - 64 位对应 16EB
- 数字
  - 计算机中的数字可以分为正数、负数、浮点数
  - 表示浮点数的标准是 IEEE754，使用类似科学记数法的方式表示
    - 分为三部分：符号位，有效数字位和指数位
    - 32 位中分别占 1，8，23 位
- 字母
  - 字符集：定义字符的范围，是字符与数字的对照表
  - 字符编码：一种数字的编码方式
  - 最早培根使用 5 位表示 26 个字母
  - ASCII 使用 7 位表示 128 个不同字符
    - ASCII 既是字符集，也是字符编码
  - 之后扩展到 8 位，另外的 128 个字符面向欧洲使用
  - 双字节编码
    - 在 ASCII 的基础上，东亚地区使用
  - Unicode 字符集
    - 解决了不同标准的问题，为每个字符分配唯一码点
    - 最常用的 Unicode 字符编码是 UTF
      - 可以分为 8，16，32
      - UTF-8
        - 按码点范围分段，用 1~4 字节动态编码
        - 一字节与 ASCII 一致
        - 三字节用于表示汉字等
        - 四字节表示特殊字符
      - UTF-16
        - 基本多语言平面使用 2 字节
        - 辅助平面使用 4 字节
      - UTF-32
        - 每个码点使用 4 字节固定长度表示
