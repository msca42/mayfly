# 导入模块
from pathlib import Path

# 输入
name = input("请输入名字")

# 写入
path = Path('guest.txt')
path.write_text(name)
