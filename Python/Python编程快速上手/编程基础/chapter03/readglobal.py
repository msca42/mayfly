def spam():
    print(eggs) # 全局作用域变量可以在函数内使用

eggs = 42
spam()
print(eggs)