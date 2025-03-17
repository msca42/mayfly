# 3.7

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

print("Sorry to tell you,only two visitors will be invite")
del_visitor = visitors.pop()
print(f"Sorry {del_visitor}, you will not be invite")
del_visitor = visitors.pop()
print(f"Sorry {del_visitor}, you will not be invite")
del_visitor = visitors.pop()
print(f"Sorry {del_visitor}, you will not be invite")
del_visitor = visitors.pop()
print(f"Sorry {del_visitor}, you will not be invite")

print(f"Hello {visitors[0]}, welcome to my party")
print(f"Hello {visitors[1]}, welcome to my party")
del visitors[0]
del visitors[0]

print(visitors)