# users = ['a','b','c','d','admin'] 
users = []
if not users :
    print("We need to find some users!")
for user in users:
    if user == 'admin':
        print("Hello admin, would you like to see a status report?")
    else:
        print("Hello Jaden, thank you for logging in again.")