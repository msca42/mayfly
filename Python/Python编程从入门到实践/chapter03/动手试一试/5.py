names = [
    'a', 'b', 'c', 'd', 'e'
]

print(f"Hello {names[0]}, welcome to my party.")
print(f"Hello {names[1]}, welcome to my party.")
print(f"Hello {names[2]}, welcome to my party.")

print(f"sorry to tell you, {names[0]} will not come")
names[0] = 'f'

print(f"Hello {names[0]}, welcome to my party.")
print(f"Hello {names[1]}, welcome to my party.")
print(f"Hello {names[2]}, welcome to my party.")
print(f"Hello {names[3]}, welcome to my party.")
print(f"Hello {names[4]}, welcome to my party.")
