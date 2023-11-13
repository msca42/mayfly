# 3.5 有位嘉宾无法来，邀请另一位加冰
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
print(f"邀请了{len(guests)}位嘉宾")
