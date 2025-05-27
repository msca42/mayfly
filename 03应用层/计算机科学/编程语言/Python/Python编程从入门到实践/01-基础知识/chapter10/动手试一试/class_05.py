# 导入模块
from pathlib import Path

names = []

# 输入
while True:
    name = input("请输入名字或输入q退出")
    if name == 'q':
        break
    else:
        names.append(name)

# 写入
path = Path('guest_book.txt')
# for i in range(len(names)):
#    path.write_text(names[i])

# 问题是追加写入
# 解决问题思路： 了解write_text特性

content = '\n'.join(names)
path.write_text(content)