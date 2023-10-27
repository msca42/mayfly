# 局部变量和全局变量 global提升局部变量为全局变量
def spam():
    global eggs
    eggs = 'spam'


eggs = 'global'
spam()
print(eggs)
