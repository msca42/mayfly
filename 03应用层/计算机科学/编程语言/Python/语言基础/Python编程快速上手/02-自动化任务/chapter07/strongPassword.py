import re

def is_strong_password(password):
    # 检查长度是否不少于 8 个字符
    length_regex = re.compile(r'.{8,}')
    if not length_regex.search(password):
        return False

    # 检查是否包含大写字符
    uppercase_regex = re.compile(r'[A-Z]')
    if not uppercase_regex.search(password):
        return False

    # 检查是否包含小写字符
    lowercase_regex = re.compile(r'[a-z]')
    if not lowercase_regex.search(password):
        return False

    # 检查是否至少有一位数字
    digit_regex = re.compile(r'\d')
    if not digit_regex.search(password):
        return False

    return True

# 测试函数
test_passwords = [
    "Abcdefg1",  # 强口令
    "abcdefg1",  # 缺少大写字符
    "ABCDEFG1",  # 缺少小写字符
    "Abcdefg",   # 缺少数字
    "Ab1"        # 长度不足 8 个字符
]

for password in test_passwords:
    if is_strong_password(password):
        print(f"'{password}' 是强口令")
    else:
        print(f"'{password}' 不是强口令")