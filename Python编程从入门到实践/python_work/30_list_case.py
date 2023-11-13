# 3.7 在3.6的基础上只能邀请两位嘉宾
# 使用pop()不断删除，直到只剩两位嘉宾
# 每删除一位，都打印消息
# 提示余下两位，打印消息
# 使用del删除两位嘉宾，验证空名单
guests = ['a','b','c']
print(f"Hello {guests[0]}, Welcome to my dinnner")
print(f"Hello {guests[1]}, Welcome to my dinnner")
print(f"Hello {guests[2]}, Welcome to my dinnner")
print(f"Sorry {guests[0]} can't arrive")
guests.remove(guests[0])
guests.append('d')
print(f"Hello {guests[0]}, Welcome to my dinnner")
print(f"Hello {guests[1]}, Welcome to my dinnner")
print(f"Hello {guests[2]}, Welcome to my dinnner")
print("Everyone, I find three chairs. ")
guests.insert(0,'e')
guests.insert(2,'f')
guests.append('g')
print(f"Hello {guests[0]}, Welcome to my dinnner")
print(f"Hello {guests[1]}, Welcome to my dinnner")
print(f"Hello {guests[2]}, Welcome to my dinnner")
print(f"Hello {guests[3]}, Welcome to my dinnner")
print(f"Hello {guests[4]}, Welcome to my dinnner")
print(f"Hello {guests[5]}, Welcome to my dinnner")
print("only two chairs leave")
print(f"Sorry {guests.pop()}, please leave")
print(f"Sorry {guests.pop()}, please leave")
print(f"Sorry {guests.pop()}, please leave")
print(f"Sorry {guests.pop()}, please leave")
print(f"Hi {guests[0]}, you can join in")
print(f"Hi {guests[1]}, you can join in")
del guests[0]
del guests[0]
print(guests)
print(f"邀请了{len(guests)}位嘉宾")