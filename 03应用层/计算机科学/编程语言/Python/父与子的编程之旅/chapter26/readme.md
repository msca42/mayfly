# 使用套接字建立网络连接
- socket模块，将构造请求所需的字节数据直接发送出去
## 文本与字节
- 文本和字节通过字符编码进行转换
- Python在发送字节流时文本使用encode()方法传入编码名字, 返回值类型bytes,内容上是一个个的整数，可以使用decode()方法还原成文本
- 如果文本都是ASCII字符，那么在字符串前缀b''即可转换

## 服务器
- 编写服务器程序步骤
    - 创建一个套接字
    - 绑定: 告诉Python这台服务器的端口号
    - 将套接字绑定到一个端口号上，告诉服务器从此端口上监听传入的连接
    - 接收传入连接，读取并响应
    - 关闭

## 从客户端获取数据

## 制作聊天服务器
- IP地址
- 创建聊天客户端
