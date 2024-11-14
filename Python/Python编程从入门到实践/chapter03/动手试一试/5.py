names = ['a','b','c']
print(f"Welcome to my party, {names[0]}")
print(f"Welcome to my party, {names[1]}")
print(f"Welcome to my party, {names[2]}")

print(f"{names[0]} will not come")
names[0] = 'd'

print(f"Welcome to my party, {names[0]}")
print(f"Welcome to my party, {names[1]}")
print(f"Welcome to my party, {names[2]}")