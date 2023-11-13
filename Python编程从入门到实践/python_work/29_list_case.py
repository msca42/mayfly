# 3.6 在3.5的基础上，还可以邀请3个人
# 使用insert()开头添加一位
# 使用insert()中间添加一位
# 使用append()末尾添加一位
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
print(f"邀请了{len(guests)}位嘉宾")