tableData = [['apples', 'oranges', 'cherries', 'banana'],
             ['Alice', 'Bob', 'Carol', 'David'],
             ['dogs', 'cats', 'moose', 'goose']]


def printTable(tableData):
    maxlength = 0
    for i in tableData:
        for j in i:
            if maxlength < len(j):
                maxlength = len(j)

    show = []
    for i in tableData:
        for j in i:
            show.append(j.rjust(maxlength))

# 0  4 8
# 1  5 9
# 2  6 10
# 3  7 11
    for i in range(4):
        for j in range(3):
            print(show[4 * j + i], end=' ')
        print()


printTable(tableData)
