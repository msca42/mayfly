import socket
# 创建连接 url和端口号
# 参数必须为一个独立的元组
connection = socket.create_connection(('helloworldbook3.com',80))
# 传递信息
connection.sendall('GET /data/message.text HTTP/1.0\r\n'.encode('utf-8'))
connection.sendall(b'Host: helloworldbook3.com\r\n\r\n')
response = bytes() 
while True:
    new_data = connection.recv(4096)
    if not new_data:
        break
    response += new_data

print(response.decode('utf-8'))
connection.close()