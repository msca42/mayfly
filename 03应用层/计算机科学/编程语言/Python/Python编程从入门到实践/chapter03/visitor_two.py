# 3.5

visitors = ['a','b','c']
print(f"Hello {visitors[0]}, welcome to my party")
print(f"Hello {visitors[1]}, welcome to my party")
print(f"Hello {visitors[2]}, welcome to my party")

print(f"Sorry to tell you {visitors[2]} will not come")
visitors[2]  = 'd'
print(f"Hello {visitors[0]}, welcome to my party")
print(f"Hello {visitors[1]}, welcome to my party")
print(f"Hello {visitors[2]}, welcome to my party")