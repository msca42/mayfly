# 应用层

## 应用层协议原理
- 网络应用程序体系结构
    - 客户-服务器体系结构
        - Web、FTP、Telnet、电子邮件
    - 对等体P2P体系结构
        - 文件共享、对等方协助下载加速器、因特网电话和视频会议
- 进程通信(跨端)
    - 程序通信的本质是进程通信
    - 客户和服务器进程
        - 发起方是客户端、等待方是服务器
    - 进程和计算机网络之间的接口
        - 进程通过套接字进行报文的收发
        - 套接字: 应用程序和网络之间的应用程序编程接口(api)
    - 进程寻址
        - 通过IP地址标记目的，通过端口号标记进程
- 可供应用程序使用的运输服务
    - 运输层协议能够提供的服务特点：可靠数据传输、吞吐量、定时和安全性
- 因特网提供的运输服务
    - TCP
        - 面向连接的服务: 在传输数据之前进行握手建立TCP连接
        - 可靠的数据传送服务
    - UDP
        - 面向无连接的服务
- 应用层协议
    - 定义了运行在不同端系统上的应用程序进程如何相互传递报文
    - 交换的报文类型、各种报文类型的语法、字段的语义、确定一个进程何时以及如何发送报文，对报文响应的规则
- 本书涉及的网络应用
    - Web、文件传输、电子邮件、目录服务、流式视频和P2P
## Web和HTTP
- HTTP概况
    - 超文本传输协议
    - 有一个客户端程序和一个服务器程序实现，通过HTTP报文进行会话
    - 由于服务器不保存客户端的任何信息，所有称HTTP是无状态协议
- 非持续连接和持续连接
    - 根据每个请求/响应对的发送途径划分，单独一个TCP连接发送时非持续，所有请求响应经过相同TCP是持续连接
    - HTTP默认持续连接，可以设置非持续连接
    - 往返时间RTT: 从发出请求到响应结束的时间
    - 非持续连接
        - 每个对象都会建立一次请求响应的TCP连接，
- HTTP报文格式
- 用户和服务器的交互: cookie
- Web缓存
- 条件GET方法
## 因特网中的电子邮件
- SMTP
- 与HTTP的对比
- 邮件报文格式
- 邮件访问协议
## DNS: 因特网的目录服务
- DNS提供的服务
- DNS工作机理概述
- DNS记录和报文
## p2p文件分发
## 视频流和内容分发网
- 因特网视频
- HTTP流和DASH
- 内容分发网络
- 学习案例: Netflix、YouTube和"看看"
## 套接字编程: 生成网络应用
- UDP套接字编程
- TCP套接字编程
## 小结