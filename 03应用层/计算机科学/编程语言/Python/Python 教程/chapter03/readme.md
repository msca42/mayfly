# Python 速览

## Python 用作计算器

- 运算符
  - +、-、\*、/可以执行算术运算
  - 除法返回浮点数，除非整除//
  - 取余运算%
  - 乘方\*\*
  - ()可以用来分组
  - 赋值 =
- 数字类型
  - 整数 int
  - 浮点数 float
  - 精确计算 Decimal
  - 分数类型 Fraction
  - 复数
- 文本类型
  - 字符串 str, 用引号包裹
    - 三重引号可以跨越多行
    - 无法修改
  - 原始字符串 r''
    - 不能以奇数\字符结束
  - 常见操作
    - 拼接
      - 使用+
      - 两个字符串字面量相邻的会自动合并
    - 重复
      - 使用\*
    - 访问元素
      - 通过索引
    - 切片
      - 会自动处理索引越界
    - 获取长度
      - len()
- 列表
  - 使用[]标注，逗号分隔，可以包含不同类型的值，一般情况下相同
  - 可变类型
  - 切片
    - 获取列表的浅拷贝
    - 切片赋值的本质是对原列表进行替换操作，会影响原列表
  - 获取长度
    - len()
- 获取对象内存地址
  - id()

## 走向编程的第一步
- 通过一个斐波那契额案例说明一些知识点
  - 多重赋值
    - 可以同时对多个对象进行赋值
  - while循环
    - 只要条件为真就会一直执行