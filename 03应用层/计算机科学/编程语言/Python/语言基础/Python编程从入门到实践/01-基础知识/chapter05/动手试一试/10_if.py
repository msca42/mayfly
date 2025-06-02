current_users = ['A','B','C','D','E']
new_users = ['a','b','f','g','h']

new_current_users =[]

for user in current_users:
    new_current_users.append(user.lower())

print(new_current_users)

for user in new_users:
    if user in new_current_users:
        print("Please input another name")
    else:
        print("This name can use")