from pathlib import Path
import json

def get_stored_info(path):
    """如果存储了用户名,就获取它"""
    if path.exists():
        contents = path.read_text()
        info = json.loads(contents)
        return info
    else:
        return None

def get_new_info(path):
    """提示用户输入信息"""
    username = input("What is your name? ")
    age = input("What is your age?")
    height = input("What is your height")
    info = {}
    info['username'] = username
    info['age'] = age
    info['height'] = height 
    contents = json.dumps(info)
    path.write_text(contents)
    return info

def greet_user():
    """问候用户,并指出信息"""
    path = Path('info.json')
    username = get_stored_info(path)
    if username:
        print(f"Welcome back, {username}")
    else:
        username = get_new_info(path)
        print(f"We'll remember you when you come back, {username}")

greet_user()