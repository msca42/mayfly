# 用户输入5个名字，保存在一个列表中
print("Enter 5 names:")
name_list = []
for i in range(0, 5):
    name = input()
    name_list.append(name)
print("The names are [", end='')
for i in range(0, 5):
    if i == 4:
        print(f"'{name_list[i]}'", end='')
        break
    print(f"'{name_list[i]}',", end='')
print("]")
# 输出排序后的列表
print(sorted(name_list))
# 只打印用户输入的第三个名字
print(f"The third name you entered is : {name_list[2]}")

# 用户随机替换名字，打印新列表
index = int(input("Replace one name.Which one?(1-5):"))
new_name = input("New name: ")
name_list[index] = new_name
print("The names are [", end='')
for i in range(0, 5):
    if i == 4:
        print(f"'{name_list[i]}'", end='')
        break
    print(f"'{name_list[i]}',", end='')
print("]")

# 编写字典 添加单词和含义，还能在其中查找
dict = {}
while True:
    answer = input("Add or look up a word (a/l)")
    if answer == 'a':
        key = input("Type the word:")
        if key in dict.keys():
            continue
        value = input("Type the definition:")
        dict[key] = value
        print("Word added!")
    elif answer == 'l':
        key = input("Type the word:")
        if key in dict.keys():
            print(dict[key])
        else:
            print("That word isn't in the dictionary yet.")
    else:
        break
