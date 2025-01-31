def comma(spam):
    str = ''
    for i in range(len(spam)):
        if i == len(spam) - 1:
            str += 'and ' + spam[i]
            break
        str += spam[i] + ', '
    return str

spam = ['apples', 'bananas', 'tofu', 'cats']
print(comma(spam))
