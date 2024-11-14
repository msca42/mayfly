names = ['a','b','c']
print(f"Welcome to my party, {names[0]}")
print(f"Welcome to my party, {names[1]}")
print(f"Welcome to my party, {names[2]}")

print(f"{names[0]} will not come")
names[0] = 'd'

print(f"Welcome to my party, {names[0]}")
print(f"Welcome to my party, {names[1]}")
print(f"Welcome to my party, {names[2]}")

names.insert(0,'e')
names.insert(2,'f')
names.append('g')

print(f"Welcome to my party, {names[0]}")
print(f"Welcome to my party, {names[1]}")
print(f"Welcome to my party, {names[2]}")
print(f"Welcome to my party, {names[3]}")
print(f"Welcome to my party, {names[4]}")
print(f"Welcome to my party, {names[5]}")

print("I am sorry to tell you, I will invite two friends to my party.")

name = names.pop()
print(f"I am sorry, {name}")
name = names.pop()
print(f"I am sorry, {name}")
name = names.pop()
print(f"I am sorry, {name}")
name = names.pop()
print(f"I am sorry, {name}")

print(f"Welcome to my party, {names[0]}")
print(f"Welcome to my party, {names[1]}")

del names[0]
del names[0]
print(names)