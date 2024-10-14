def spam():
    eggs = 99
    bacon()
    print(eggs) # 局部作用域只能在本函数内使用

def bacon():
    ham = 101
    eggs = 0

spam()