# 字符串操作
- 字符串表示可以使用单引号、双引号以及三重引号
- 使用r''可以表示原始字符串
- 将字符串放入其他字符串
    - 方式一: 使用+运算符和字符串连接
    - 方式二: 字符串插值，其中字符串内的%s运算符充当标记，并由字符串后的值替代
    - 方式三: f字符串
- 方法
    - upper(): 转换为大写
    - lower(): 转换为小写
    - isX(): 返回描述字符串特点的布尔值
        - isupper(): 判断大写
        - islower(): 判断小写
        - isalpha(): 只包含字母，非空
        - isalnum(): 只包含字母和数字，非空
        - isdecimal(): 只包含数字，非空
        - isspace(): 只包含空格、制表符和换行符、非空
        - istitle(): 以大写字母开头、后面小写
    - startswith(): 以参数开始
    - endswith(): 以参数结束
    - join(): 将字符串列表以参数连接为字符串
    - split(): 将字符串拆解为字符串列表
    - partition(): 将字符串分成分隔符字符串前后的文本
        - 如果找不到分隔符字符串，返回的元组中第一个字符串是整个字符串，其他为空
    - rjust(): 右对齐，参数长度、填充字符
    - ljust(): 左对齐，参数长度、填充字符
    - cener(): 居中对齐
    - strip(): 删除空白字符 
        - 参数: 指定删除字符
    - rstrip(): 删除右侧空白字符
    - lstrip(): 删除左侧空白字符
    - ord(): 获取单字符的Unicode代码点，也就是字符对应的数字值
    - chr(): 获取一个整数代码点的单字符字符串

## 模块
- pyperclip模块
    - copy() 复制
    - paste() 粘贴