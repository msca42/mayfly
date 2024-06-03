current_users = ['a', 'b', 'c', 'd', 'e']
new_users = ['a', 'b', 'f', 'g', 'h']
for user in new_users:
    if user.upper() in current_users:
        print("需要输入别的用户名")
    else:
        print("用户名未被使用")
