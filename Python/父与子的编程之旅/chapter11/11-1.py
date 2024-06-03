for multiplier in range(5, 8):  # 外循环用5，6，7进行三次迭代
    for i in range(1, 11):  # 内循环打印乘法表
        print(i, "x", multiplier, "=", i * multiplier)
    print()
