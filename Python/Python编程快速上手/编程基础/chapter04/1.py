# 需求: 编写一个函数，以一个列表值作为参数，返回一个字符串
# 表项之间以逗号和空格分隔，并在最后一个表项之前插入and

spam = ['apples','bananas','tofu','cats']

def returnString(spam):
    result = ''
    for i in spam:
        if i == spam[-1]:
            result = result + 'and '+ i
            return result
        result += i + ',';

print(returnString(spam))
