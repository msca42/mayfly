spam = ['apples', 'bananas', 'tofu', 'cats']


def returnString(spam):
    s = ""
    for i in range(len(spam)):
        if i == len(spam) - 1:
            s += " and " + spam[i]
            break
        s += spam[i] + ","
    return s


s = returnString(spam)
print(s)
