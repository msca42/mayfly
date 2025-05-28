def printTable(tableData):
    colWidth = []
    # 如何找到内层列表中字符串最长值
    for i in range(len(tableData)):
        length = 0
        for j in range(len(tableData[i])):
            if length < len(tableData[i][j]):
                length = len(tableData[i][j])
        colWidth.append(length)

    # 打印
    for i in range(len(tableData[0])):
        for j in range(len(tableData)):
            print(tableData[j][i].rjust(colWidth[j]),end=' ')
        print()


tableData = [
    ['apples', 'oranges','cherries', 'banana'],
    ['Alice', 'Bob', 'Carol', 'David'],
    ['dogs', 'cats', 'moose', 'goose']
]


printTable(tableData)