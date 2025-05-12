def my_abs(x):
    if not isinstance(x,(int,float)):
        raise TypeError('bad poerand type')
    if x >= 0:
        return x
    else:
        return -x
my_abs(-9)