# 5-10
current_users  = ['A','B','c','d','e']
new_users = ['a','b','f','g','h']
new_current_users = [i.lower() for i in current_users]

for new_user in new_users:
  if new_user.lower() in new_current_users:
    print(f"{new_user} is used,please input other user name")
  else:
    print(f"{new_user} is not use")
