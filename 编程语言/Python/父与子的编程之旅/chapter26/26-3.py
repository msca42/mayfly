import socket

# 创建套接字
s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
# 绑定套接字与端口
s.bind(('',12345))
# 监听
s.listen(1)
# 等待连接
connection, from_address = s.accept()
# 向该连接发
connection.sendall(b"Hi there! Welcome to my server!\r\nWhat's your name? ")
# 每次从客户端读取1字节数据
name = bytes()
while True:
    # 等待客户端发送1字节的数据
    next_character =  connection.recv(1)
    if next_character in [b'',b'\r',b'\n']:
        break
    else:
        name += next_character
connection.sendall(b"Nice to meet you, " + name + b"! Goodbye for now!\r\n")
# 关闭连接
connection.shutdown(socket.SHUT_WR)
connection.close()
s.close()