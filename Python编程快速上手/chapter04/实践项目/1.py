def returnString(spam):
    strs = ''
    for value in spam:
        if value == spam[-1]:
            strs += "and " + value
            break
        strs += value + ", "
    return strs


spam = ['apples', 'bananas', 'tofu', 'cats']

print(returnString(spam))
