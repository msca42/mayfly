# 创建一个待验证的用户列表
# 和一个存储已验证的用户空列表
unconfiremd_users = ['alice','brian','candace']
confirmed_users = []

# 验证每一个用户
# 将已验证用户存储到空列表中
while unconfiremd_users:
    current_user = unconfiremd_users.pop()

    print(f"Verifying user: {current_user.title()}")
    confirmed_users.append(current_user)

# 显示所有已验证用户
print("\nThe following users have been confirmed:")
for confirmed_user in confirmed_users:
    print(confirmed_user.title())