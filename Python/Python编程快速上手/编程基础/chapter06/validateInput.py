while True:
    print('Enter your age:')
    age = input()
    if age.isdecimal():
        break
    print('Please enter a number for your age.')

while True:
    print('Select a new password (letter and number only):')
    password = input()
    if password.isalnum():
        break
    print('Password can only have letters and numbers.')