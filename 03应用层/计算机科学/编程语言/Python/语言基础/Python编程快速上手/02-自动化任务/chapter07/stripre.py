import re


def custom_strip(text, chars=None):
    if chars is None:
        # 如果没有提供 chars 参数，去除首尾空白字符
        pattern = r'^\s+|\s+$'
        return re.sub(pattern, '', text)
    else:
        # 如果提供了 chars 参数，去除指定字符
        # 对 chars 中的特殊字符进行转义，避免正则表达式错误
        escaped_chars = re.escape(chars)
        pattern = fr'^[{escaped_chars}]+|[{escaped_chars}]+$'
        return re.sub(pattern, '', text)
