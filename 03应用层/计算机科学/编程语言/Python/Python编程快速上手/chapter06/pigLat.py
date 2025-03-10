'''
如果单词以元音开头，就在单词末尾添加yay。如果单词以辅音或辅音簇（例如ch或gr）开头，那么该辅音或辅音簇会移至单词的末尾，然后加上ay
'''
# English to Pig Latin
# input message
print('Enter the English message to translate into Pig Latin:')
message = input()

# 元音字符元组
VOWELS = ('a','e','i','o','u','y')
# pigLatin 字符列表
pigLatin = [] # A list of the words in Pig Latin
# 将message拆分为字符并循环
for word in message.split():
    # Separate the non-letters at the start of this word:
    prefixNonLetters = ''
    while len(word) > 0 and not word[0].isalpha():
        prefixNonLetters += word[0]
        word = word[1:]
    if len(word) == 0:
        pigLatin.append(prefixNonLetters)
        continue

    # Separate the non-letter at the end of this word:
    suffixNonLetters = ''
    while not word[-1].isalpha():
        suffixNonLetters += word[-1]
        word = word[:-1]
    
    # Remember if the word was in uppercase or title case.
    wasUpper = word.isupper()
    wasTitle = word.istitle()

    word = word.lower() # Make the word lowercase for translation.

    # Separate the consonants at the start of this word:
    prefixConsonants = ''
    while len(word) > 0 and not word[0] in VOWELS:
        prefixConsonants += word[0]
        word = word[1:]
    
    # Add the Pig Latin ending to the word:
    if prefixConsonants != '':
        word += prefixConsonants + 'ay'
    else:
        word += 'yay'
    
    # Set the word back to uppercase or title case:
    if wasUpper:
        word = word.upper()
    if wasTitle:
        word = word.title()

    # Add the non-letters back to  the start or end of the word.
    pigLatin.append(prefixNonLetters + word + suffixNonLetters)

# JOIN all the words back together into a single string:
print(' '.join(pigLatin))
