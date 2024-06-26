# 计算机组成

## 引言

- 计算机组成部件分为三大类: 中央处理器单元、主存储器和输入/输出子系统

## 中央处理单元

- 作用: 用于数据的运算
- 组成: 算术逻辑单元 ALU、控制单元、寄存器组
- 算术逻辑单元 ALU
  - 作用:对数据进行逻辑、移位和算术运算
- 寄存器
  - 作用: 存放临时数据的高速独立的存储单元
  - 常见寄存器
    - 数据寄存器: R1 到 Rn 用于存储输入的数据和运算的结果
    - 指令寄存器: IR 存储的不仅是数据，还有内存中对应的程序；
    - 程序计数器: PC 保存当前正在执行的指令，当前的指令执行完成后，计数器自动加 1，指向下一条指令的内存地址
- 控制单元
  - 控制各个子系统的操作，通过控制单元到其他子系统的信号进行

## 主存储器

- 主存储器是存储单元的集合，每个存储单元都有唯一的标识，称为地址
- 数据以称为字的位组的形式在内存中传入和传出，字的长度为 8 的倍数，8 位二进制称为一个字节
- 地址空间
  - 每个字都有相应的标识，软件层面，程序员使用命名的方式区分,硬件层面，通过地址来表示
  - 所有在存储器中标识的独立的地址单元的总数称为地址空间
  - 地址与字的对应关系: 内存是 64K(2^16),字节为 1 字节，对应的地址就是 16 位
- 存储器类型
  - 主要有两种类型的存储器:RAM 和 ROM
  - RAM
    - 随机存取存储器，使用存储单元地址随机存取一个数据项，用户可以进行写数据
    - 易失性，系统断电后，信息丢失
    - 可以分为 SRAM 和 DRAM 两类
      - SRAM：静态 RAM 使用触发器门电路保存数据，不需要刷新，速度快，价格昂贵
      - DRAM: 动态 RAM 使用电容器，充电状态 1，放电状态 0，需要周期性刷新，速度慢，价格便宜
  - ROM
    - 只读存储器，内容由制造商书写，只能读不能写
    - 非易失性，断电之后，数据不会丢失
- 存储器的层次结构
  - 对速度苛刻，使用少量高速存储器，类似 CPU 的寄存器
  - 用适量的中速存储器存储经常需要访问的数据，类似高速缓冲存储器
    - 缓存在任何时间在主存中都有副本
    - 数据的读取顺序是 CPU、高速缓冲存储器、主存
  - 用大量的低速存储器存储不经常访问的数据，类似主存

## 输入/输出

- 作用: 使计算机与外界通信，并在断电情况下，存储程序和数据
- 可以分为非存储设备和存储设备
- 非存储设备
  - 作用: 使 CPU/内存可以与外界通信
  - 键盘: 提供输入功能
  - 监视器: 显示输出并同时响应键盘的输入
  - 打印机: 产生永久性记录的输出设备
- 存储设备
  - 相对主存便宜，信息不易丢失，辅助存储
  - 分为磁介质和光介质

## 子系统的互连

- CPU 和存储器的连接
  - 使用三组总线连接，分别是数据总线、地址总线和控制总线
  - 数据总线
    - 由计算机的字的大小决定线的数量，每一根线每次传输 1 位数据
  - 地址总线
    - 由存储空间的大小决定线的数量，存储空间容量 2^n 个字，每次传输 n 位地址数据，线的数量就是 n
  - 控制总线
    - 负责中央处理器和内存之间传送信息，线数取决于控制命令的总数，2^m 条控制指令需要 m 根线
- IO 设备的连接
  - 输入输出设备通过一个称为输入输出控制器的器件连接到总线上
  - 常见控制器：SCSI、火线、USB 和 HDMI
  - SCSI: 小型计算机系统接口
  - USB: 通用串行总线
  - HDMI: 高清晰度多媒体接口
- 寻址方式
  - IO 独立寻址
    - 读写内存的指令和读写输入输出设备的指令完全不同
  - IO 存储器映射寻址
    - CPU 将输入输出控制器中每一个寄存器都看作内存中的某个存储字

## 程序执行

- 通用计算机使用称为程序的一系列指令来处理数据
- 机器周期
  - CPU 利用重复的机器周期来执行程序中的指令
  - 取指令
    - 控制单元命令系统将下一条要执行的指令复制到 CPU 的指令寄存器
    - 被复制的指令地址保存在程序计数器中
    - 复制完成，程序计数器自动加 1 指向内存中的下一条指令
  - 译码
    - 当指令置于指令寄存器后，控制单元译码，产生一系列系统可以执行的二进制代码
  - 执行
    - 控制代码发送指令到 CPU 的各个部件中执行指令
- 输入输出操作
  - 因为输入输出设备的运行速度比 CPU 慢，所以 CPU 必须和输入输出设备同步，常见同步方法: 程序控制输入输出，中断控制输入输出，直接存储器存取 DMA
  - 程序控制输入输出
    - 采用的同步方式是 CPU 等待 IO 设备
    - 当 CPU 遇到一条 IO 指令时，停止工作，不断查询 IO 设备的状态，直到数据传输完成
    - 缺点 CPU 浪费大量的时间查询 IO 状态
  - 中断控制输入输出
    - CPU 告诉 IO 设备可以开始传输，，当 IO 设备准备好时，通知(中断) CPU
  - 直接存储器存取(DMA)
    - 在高速 IO 设备间传递大量数据块，通过 DMA 控制器取代 CPU

## 不同的体系结构

- CISC
  - 复杂指令集计算机
  - 使用大量的指令, 但是 CPU 和控制单元的电路复杂
  - 解决方案
    - CPU 不直接执行机器语言指令，执行微操作
    - 复杂指令被转化为一系列简单操作由 CPU 执行
    - 机制原理
      - 需要一个称为微内存的特殊内容，保存指令集中的每个复杂指令的一系列操作
      - 使用微操作的程序设计被称为微程序设计
- RISC
  - 精简指令集计算机
  - 使用少量的指令完成最少的简单操作
  - 流水线
    - 通过水流线改善吞吐量(单位时间内完成的指令总数)
  - 并行处理
    - 过去计算机只有单个控制单元、算术逻辑单元和内存单元
    - 所谓并行处理就是在计算机内部添加多个控制单元、多个算术逻辑单元和多个内存单元
    - 数据处理方面计算机的组织分类
      - SISD 单指令流，单数据流
        - 计算机一个控制单元、一个算术逻辑单元、一个内存单元
      - SIMD 单指令流，多数据流
        - 计算机一个控制单元、多个处理单元、一个内存单元
      - MISD 多指令流，单数据流
      - MIMD 多指令流，多数据流

## 简单计算机

- 组成 CPU、存储器和输入/输出子系统
- CPU
  - 数据寄存器
    - 16 个 16 位的数据寄存器 R0 ～ R15
  - 算术逻辑单元 ALU
  - 控制单元
    - 控制 ALU 的操作，对内存的存取和对 IO 子系统的存取
    - 程序计数器 PC:8 位，保存下一条被执行的指令的地址，每个机器周期后，程序计数器加 1
    - 指令寄存器 IR: 16 位，包含当前周期译码的指令
- 主存
  - 有 256 个 16 位的存储单元，既有数据也有程序指令
- 输入/输出子系统
  - 由一个键盘和一台监视器组成，像内存单元一样以(FE)16 和(FF)16 两个地址和 CPU 交互
- 指令集
  - 该计算机具有 16 条指令集合的能力
  - 指令由两部分构成: 操作码和操作数
    - 操作码:指明在操作数上执行的操作类型
    - 常见操作码: LOAD、ADD、MOVE、JUMP、STORE
- 处理指令
  - 取指令、译码、执行
- 存储程序和数据
  - 程序和数据都存储在内存中

## 总结

- 列出计算机的三个子系统
  - 中央处理器，存储器、输入/输出系统
- 描述计算机中样处理单元 CPU 的作用
  - 数据运算和指令控制的场所
- 描述典型计算机中指令周期的取指令-译码-执行阶段
  - 从内存中逐条取出指令
  - 将取出的指令存储到指令寄存器中
  - 解释并执行指令
- 描述主存和它的地址空间
  - 存储器通常是按照字来存储传输的，字的大小通常是字节的倍数，每个字对应一个地址，地址的集合称为地址空间，存储数据与地址空间的对应关系是 log2 函数
- 区分主存和缓存
  - CPU 中搭建了三级存储系统，第一级是 CPU 的寄存器，第二级是高速缓存，第三级是主存
  - 数据的读写也是按照这样的顺序
- 定义输入/输出子系统
  - 使计算机与外界通信，并在断电情况下，存储程序和数据
- 理解子系统间的相互连接、列出不同总线系统
  - 数据总线、控制总线、地址总线
- 描述输入/输出编址的不同方法
- 区分设计计算机体系结构的两种主要趋势
  - RISC
  - CISC
- 理解计算机是如何使用管道改善吞吐量的
- 理解并行处理是如何改善计算机的吞吐量的
