import random,easygui
secret = random.randint(1,100)
guess = 0
tries = 0

easygui.msgbox("AHOY! I'm the Dread Pirate Roberts, and I have a secret! It is a number from 1 to 100. i'll give you 6 tries.")
while guess != secret and tries < 6:
    guess = easygui.integerbox("What's yer guess, matey?", upperbound=100)
    if not guess: break
    if guess < secret:
        easygui.msgbox(str(guess) + " is too low, ye scurvy dog!")
    elif guess > secret:
        easygui.msgbox(str(guess) + "  is too high, landlubber!")
    tries = tries + 1

if guess == secret:
    easygui.msgbox("Avast! Ye got it! Found my secret, ye did!")
else:
    easygui.msgbox("No more guesses! The number was " + str(secret))