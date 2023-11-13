# 添加空白
  # 空白泛指任何非打印字符，如空格，制表符\t和换行符\n
print("Python")
print("\tPython")
print("Languages:\nPython\nC\nJavaScript")
print("Languages:\n\tPython\n\tC\n\tJavaScript")

# 删除空白
favorite_language = ' python '
print(favorite_language.rstrip())
print(favorite_language.lstrip())
print(favorite_language.strip())

# 删除前缀
nostarch_url = 'https://nostarch.com'
print(nostarch_url.removeprefix('https://'))