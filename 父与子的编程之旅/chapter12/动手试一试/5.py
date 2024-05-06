vocabularys = {}
while True:
    word = input("Add or look up a word(a/1)")
    if word == 'a':
        key = input("Type the word: ")
        value = input("Type the definition: ")
        vocabularys[key] = value
        print("Word added!")
    if word == 'l':
        key = input("Type the word: ")
        if key in vocabularys.keys():
            print(vocabularys[key])
        else:
            print("That word isn't in the dictionary yet.")
    