from random import randint

list_one = [1,2,3,4,5,6,7,8,9,10,'a','b','c','d','e']
from random import randint

list_one = [1,2,3,4,5,6,7,8,9,10,'a','b','c','d','e']
tickets = []

for i in range(4):
    number = randint(1, 4)  # Selects index 1-4 (elements 2,3,4,5)
    tickets.append(list_one[number])

loop_chance = 0
while True:
    my_tickets = []  # Reset my_tickets each attempt
    for i in range(4):
        number = randint(1, 4)
        my_tickets.append(list_one[number])
    loop_chance += 1
    if tickets == my_tickets:
        print(f"Found after {loop_chance} attempts!")
        break