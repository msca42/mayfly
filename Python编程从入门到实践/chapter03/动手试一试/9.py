names = [
    'a', 'b', 'c', 'd', 'e'
]

print(f"Hello {names[0]}, welcome to my party.")
print(f"Hello {names[1]}, welcome to my party.")
print(f"Hello {names[2]}, welcome to my party.")
print(f"一共来了{len(names)}位嘉宾")

print(f"sorry to tell you, {names[0]} will not come")

print(f"Hello {names[0]}, welcome to my party.")
print(f"Hello {names[1]}, welcome to my party.")
print(f"Hello {names[2]}, welcome to my party.")
print(f"Hello {names[3]}, welcome to my party.")
print(f"Hello {names[4]}, welcome to my party.")
print(f"一共来了{len(names)}位嘉宾")

print("I have a bigger table")
names.insert(0, 'f')
names.insert(3, 'g')
names.append('h')

print(f"Hello {names[0]}, welcome to my party.")
print(f"Hello {names[1]}, welcome to my party.")
print(f"Hello {names[2]}, welcome to my party.")
print(f"Hello {names[3]}, welcome to my party.")
print(f"Hello {names[4]}, welcome to my party.")
print(f"Hello {names[5]}, welcome to my party.")
print(f"Hello {names[6]}, welcome to my party.")
print(f"Hello {names[7]}, welcome to my party.")
print(f"一共来了{len(names)}位嘉宾")

print("Sorry to tell you , I will only invite two people")
name = names.pop()
print(f"Sorry to tell {name}, I will not invite you")
name = names.pop()
print(f"Sorry to tell {name}, I will not invite you")
name = names.pop()
print(f"Sorry to tell {name}, I will not invite you")
name = names.pop()
print(f"Sorry to tell {name}, I will not invite you")
name = names.pop()
print(f"Sorry to tell {name}, I will not invite you")
name = names.pop()
print(f"Sorry to tell {name}, I will not invite you")
print(f"Hello, {names[0]}, please come to my party. ")
print(f"Hello, {names[1]}, please come to my party. ")
del names[0]
del names[0]
print(names)
