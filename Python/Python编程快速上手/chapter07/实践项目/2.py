"""
写一个函数，使用正则表达式，确保传入的口令字符串是强口令。强口令的定义是：
长度不少于8个字符，同时包含大写和小写字符，至少有一位数字。你可能需要用多个正则表达式来测试该字符串，以保证它的强度。
"""
import re  
  
def is_strong_password(password):  
    # 检查长度是否至少为8  
    if len(password) < 8:  
        return False  
      
    # 检查是否包含至少一个大写字母  
    if not re.search(r'[A-Z]', password):  
        return False  
      
    # 检查是否包含至少一个小写字母  
    if not re.search(r'[a-z]', password):  
        return False  
      
    # 检查是否包含至少一个数字  
    if not re.search(r'\d', password):  
        return False  
      
    # 如果以上所有条件都满足，则返回True  
    return True 