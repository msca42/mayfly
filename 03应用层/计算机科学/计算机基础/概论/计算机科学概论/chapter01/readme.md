# 数据存储
- 信息是如何编码和存储在计算机中

## 位和位存储
- 计算机中，所有信息都是以0和1的模式编码的，0和1的二进制数字称为位
- 布尔运算: 处理真/假值的运算， 包含AND、OR、XOR、NOT
    - AND:只有两个输入都是1的情况结果是1
    - OR: 只有两个输入都是0的情况结果是0
    - XOR:相同的输入的情况结果为0，不同的输入的情况结果为1
    - NOT:输入的结果与输出相反
- 门和触发器
    - 门: 
        - 逻辑门，给定一种布尔运算的输入值，得出该布尔运算的输出值
        - 通常由称为晶体管的小型电子电路实现，数字0和1由电压电平表示
        - 我们只需要关注如何用门的符号表示门即可
        - 包含与门、或门、异或门和非门
        - 门是构造计算机提供了构建块
    - 触发器
        - 计算机存储器的基本单元
        - 可以产生0或1输出值的电路，值会一直保持不变，直到有另一个电路过来的脉冲，使其变换成其他值
            - 脉冲: 临时变成1之后在变为0
- 十六进制记数法
    - 位模式称为位串，长位串称为流
    - 使用十六进制计数法简写位模式，利用机器位模式的长度为4的倍数制定的
    - 通常使用公共前缀0x
    
## 主存储器
- 主存储器也被称为位存储器，每个电路能够存储一个位
- 特点: 断电易失
- 存储器结构
    - 主存储器由存储单元组成
    - 存储单元容量为8位，一个8位的串称为一个字节
    - 存储单元的位通常排成一行，左端的称为高位端，右端称为低位端
    - 每个存储单元的名字称为地址，地址通过数值编号
    - 读写功能
        - 存储器还包含的其他电路可以实现读写功能
        - 读操作: 通过电信号请求从存储器中得到指定地址的内容
        - 写操作: 通过电信号请求把某个位模式存放到指定地址的存储单元
    - 随机存取存储器
        - RAM,具备任何顺序访问存储单元的能力
        - DRAM,动态存储器,将位存储位微小的快速消散的电荷,通过反复补充电荷实现位存储
        - SDRAM,同步DRAM,缩短从存储单元中获取信息所需的时间
- 存储器容量的度量
    - 1byte = 8bit
    - 1Kb = 1024byte
    - 1Mb = 1024Kb
    - 1Gb = 1024Mb
    - 1Tb = 1024Gb

## 海量存储器
- 包括磁盘、CD盘、DVD盘、磁带、闪存驱动器和固态驱动器
- 特点: 稳定、容量大、价格低
- 磁系统、光系统、闪存驱动器

## 用位模式表示信息
- 文本的表示
    - 通过代码方式表示，文本中每个不同的符号被赋予唯一的位模式
    - ASCII
        - 采用长度为7的位模式来表示字符
        - 之后扩展位8位位模式，扩展模式都是针对某一主要语种设计
    - Unicode 
        - 采用唯一的21位模式表示每个符号
        - 默认ASCII仍用8位表示
        - 其他语言可以使用16位表示
- 数值的表示
    - 使用二进制计数法而非ASCII表示数值
    - 通常采用二进制补码表示数值，因为它可以便利的表示正数和负数
    - 对于分数采用浮点计数法
- 图像的表示
    - 位图
        - 将图像解释位一组点，每个点称为一个像素，对像素进行编码，像素的集合称为位图
        - 两种编码
            - RGB编码
            - 亮度、蓝色色度和红色色度
        - 缺点是不饿能调整任意大小，否则会变模糊
    - 解析集合编码
- 声音的表示
    - 按有规律的时间间隔对声波的振幅采样，并记录所得到的值序列

## 二进制系统
- 每个数字的位置和一个量值关联
- 加法: 类似十进制加法，两个输入和进位之和
- 分数: 和整数一样，和量级有关

## 整数的存储
- 二进制补码记数法
    - 采用固定数目的二进制位来表示系统中的每个值
    - 加法: 附加位会被截断
- 余码记数法
    - 比正常二进制表示多一个余码，类似0表示为0000，余8码就是1000
    - 如何计算余码:
        - 以余8码为例，0000表示-8
        - 根据0表示的余码数判断余码

## 分数的存储
- 浮点记数法
    - 组成: 符号位、指数位、尾数位
    - 符号位: 由0和1组成的一位，0表示非负数，1表示正数
    - 指数域: 余码表示法
    - 尾数域: 二进制的精度表示，可以根据指数位移动小数点从而得到最终结果
- 规范化形式
    - 二进制表示最左边的1开始填充尾数域，即所有非0值的表示都会由一个以1开始的尾数

## 数据与程序设计
- 本书使用Python作为程序设计语言的案例
- 动态类型语言: 不需要提前确定变量的类型
- bug分类:
    - 语法错误，语义错误，运行时错误

## 数据压缩
- 在保留基础信息的同时，缩小所涉及数据的大小
- 通用：无损、有损
- 图像: gif,jpeg
- 音频和视频: mpeg标准，mp3系统

## 通信差错
- 为了验证传输过程中的文件损失
- 奇偶校验位、纠错码



