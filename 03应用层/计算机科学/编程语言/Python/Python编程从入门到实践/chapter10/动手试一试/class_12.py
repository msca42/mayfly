from pathlib import Path
import json


# 存储
## 输入信息
favorite_number = input("input your favorite number:")
## 创建空包json文件
path = Path('favorite_number.json')
## 将信息保存为json文件
content = json.dumps(favorite_number)
## 写入
path.write_text(content)
# 读取
content = path.read_text()

number = json.loads(content)
print(number)
