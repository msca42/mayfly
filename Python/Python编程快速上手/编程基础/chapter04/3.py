# 将一个二维列表图像输出
grid = [
    ['.','.','.','.','.','.'],
    ['.','O','O','.','.','.'],
    ['O','O','O','O','.','.'],
    ['O','O','O','O','O','.'],
    ['.','O','O','O','O','O'],
    ['O','O','O','O','O','.'],
    ['O','O','O','O','.','.'],
    ['.','O','O','.','.','.'],
    ['.','.','.','.','.','.'],
]

def printImage(grid):
     for x in range(len(grid[0])):
          for y in range(len(grid)):
               print(grid[y][x],end='')
          print()
printImage(grid)
