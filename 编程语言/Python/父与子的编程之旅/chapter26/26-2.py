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
connection.sendall(b"Hi there--oops,sorry, gotta go!\r\n")
# 关闭连接
connection.shutdown(socket.SHUT_WR)
connection.close()
s.close()