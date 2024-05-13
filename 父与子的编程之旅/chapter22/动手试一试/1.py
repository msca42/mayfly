import random
a = open('a.txt', 'r')
b = open('b.txt', 'r')
c = open('c.txt', 'r')
d = open('d.txt', 'r')

str_a = a.readline()
list_a = str_a.split('、')
last_a = random.choice(list_a)
a.close()

str_b = b.readline()
list_b = str_b.split('、')
last_b = random.choice(list_b)
b.close()

str_c = c.readline()
list_c = str_c.split('、')
last_c = random.choice(list_c)
c.close()

str_d = d.readline()
list_d = str_d.split('、')
last_d = random.choice(list_d)
d.close()

print(f"The {last_a} {last_b} {last_c} {last_d}")
