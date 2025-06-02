from random import randint

class Die:
    def __init__(self,sides = 6):
        self.sides = sides
    
    def roll_die(self,number,chance):
        for i in range(chance):
            random_number = randint(1,number)
            print(random_number)

die = Die()
die.roll_die(6,10)
die.roll_die(10,10)
die.roll_die(20,10)