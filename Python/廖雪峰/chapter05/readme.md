# Python基础

## 数据类型和变量
- 计算机是可以处理各种数据的机器，这里的数据包含数值，文本，图形，音频，视频，网页等
- 针对不同的数据，使用数据类型来表示，以下是常见的数据类型
    - 整数:
        - 可以使用十进制、十六进制表示
        - 对于很大的数字，可以在数字之间使用_分隔
        - 运算精确
    - 浮点数:
        - 可以使用科学记数法表示，通常基数为10，可以使用e表示
        - 运算存在误差
    - 字符串
        - 使用引号包裹的字符文本
        - 如果字符文本中出现引号，可以使用反斜线\转义
        - 使用r''表示引号内部字符串不转义
    - 布尔值
        - 只有True和False两种值
        - 逻辑运算
            - 只有布尔值可以参与的运算，包含and、or和not运算
            - and表示与运算，只有所有都是True，结果才是True
            - or表示或运算，只要其中有一个为True,结果就是True
            - not表示非运算
    - 空值:None
- 变量
    - 变量的本质是内存中的存储单元，在程序中使用变量名表示
    - 变量名规则: 大小写英文、数字和下划线_的组合，数字不能开头
    - 动态语言和静态语言
        - 动态语言: 变量本身类型不固定的语言
        - 静态语言: 变量需要事先声明其类型的语言
    - 常量
        - 不能变的变量,通常使用全大写变量名表示
- 注意事项
    - Python中整数和浮点数没有范围限制

## 字符串和编码
- 计算机如何想要处理文本，就需要把文本转换为数字
- 美国人最初将127个字符编码到计算机中，非英文母语的人为了兼容语言，在ASCII之上编码了专属编码标准，所以在进行转换时就出现了乱码问题
- 为了解决乱码问题，Unicode字符集诞生，将所有语言统一到一套编码里
    - 最常用的是UCS-16编码，采用2个字节表示
    - 问题:
        - 伴随Unicode的出现，一个新的问题产生了，原本英文字符使用ASCII编码，占用一个字节，现在使用Unicode编码占用两个字节，在存储和传输上不划算
    - 解决措施:
        - 将Unicode编码转换为可变长的UTF-8编码
        - UTF-8编码可以把一个Unicode字符根据不同的数字大小，编码为1～6个字节，通常英文字母占一个字节，汉子占3个字节
- ASCII、Unicode和UTF-8之间的关系
    - 在计算机内存中，统一使用Unicode编码
    - 数据保存到硬盘或传输过程中，转换为UTF-8编码，
    - 数据从硬盘读取到内存中，转换为Unicode字符
- 字符与数字转换函数
    - ord()获取字符的整数表示
    - chr()把编码转换为对应的字符
- Python中的实现
    - Python字符串类型是str，在内存中以Unicode表示
    - 在网络或硬盘中，需要把str变为以字节为单位的bytes
    - 转换函数
        - encode(): 将str转换为bytes
        - decode(): 将bytes转换为str
- 长度函数
    - len() 
    - 计算str的字符数
    - 计算bytes的字节数
- 输出格式化字符串
    - 使用%实现
    - format()
    - f-string

## 使用list和tuple
- list 列表
    - 可变有序集合,[]
    - 列表中的元素可以是任何类型的元素
    - 长度函数
        - len()
    - 访问元素
        - 索引(可以使用负数)
    - 添加元素
        - append() 追加函数
        - insert() 插入函数
    - 删除元素
        - pop() 末尾删除
    - 修改元素
        - 索引
- tuple 元组
    - 不可变的有序集合，()
    - 与list类型，除了无法添加和删除元素
    - 注意事项: 当元组中有且仅有一个元素时，需要加上逗号

## 条件判断
- 通过if语句实现，注意缩进以及冒号
- if..elif..else

## 模式匹配
- 类似switch，使用match能够匹配特定情况
- match..case
- 不同于switch,match可以匹配单个值，匹配多个值，匹配范围以及匹配列表

## 循环
- python有两种循环
    - for..in循环
    - while循环
- range()函数
    - 生成一个整数序列
- break 
    - 退出循环语句
- continue
    - 跳过本次循环


## 使用dict和set
- dict 字典
    - 使用键值对存储，{key:value}
    - 特点:
        - key不可变(hash算法)
        - 查找和插入速度快
        - 占用内存多
    - 查询字典
        - get(key): 如果key不存在，返回None
    - 删除key
        - pop(key) 

- set 集合
    - 无序和无重复元素的集合，{key}
    - 特点
        - 存储key,不重复
    - 添加元素
        - add()
    - 删除元素
        - remove()