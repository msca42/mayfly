# 3.6

visitors = ['a','b','c']
print(f"Hello {visitors[0]}, welcome to my party")
print(f"Hello {visitors[1]}, welcome to my party")
print(f"Hello {visitors[2]}, welcome to my party")

print(f"Sorry to tell you {visitors[2]} will not come")
visitors[2]  = 'd'
print(f"Hello {visitors[0]}, welcome to my party")
print(f"Hello {visitors[1]}, welcome to my party")
print(f"Hello {visitors[2]}, welcome to my party")

print("I find a big table")

visitors.insert(0,'E')
visitors.insert(2,'F')
visitors.append('G')
print(f"Hello {visitors[0]}, welcome to my party")
print(f"Hello {visitors[1]}, welcome to my party")
print(f"Hello {visitors[2]}, welcome to my party")
print(f"Hello {visitors[3]}, welcome to my party")
print(f"Hello {visitors[4]}, welcome to my party")
print(f"Hello {visitors[5]}, welcome to my party")