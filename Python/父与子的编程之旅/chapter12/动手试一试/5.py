# 字典
examples = {}


while(True):
    choice = input("Add or look up a word(a/l)?")
    ## 添加
    if (choice == 'a'):
      noun =  input('Type the word:')
      explanation = input('Type the definition: ')
      examples[noun] = explanation
      print('Word added!')
    ## 查询
    if (choice == 'l'):
       noun =  input('Type the word:')
       if noun in examples.keys():
          print(examples[noun]) 
       else:
          print("That word isn't in the dictionary yet.")