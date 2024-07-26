import re
sentenceRegex = re.compile(r'(Alice|Bob|Carol) (eats|pets|throws) (apples|cats|baseballs).',re.IGNORECASE)
mo1 = sentenceRegex.search('Alice eats apples.')
mo2 = sentenceRegex.search('Bob pets cats.')
mo3 = sentenceRegex.search('Carol throws baseballs.')
mo4 = sentenceRegex.search('Alice throws Apples.')
mo5 = sentenceRegex.search('BOB EATS CATS.')
print(mo1.group())
print(mo2.group())
print(mo3.group())
print(mo4.group())
print(mo5.group())


mo6 = sentenceRegex.search('RoboCop eats apples.')
mo7 = sentenceRegex.search('ALICE THROWS FOOTBALLS.')
mo8 = sentenceRegex.search('Carol eats 7 cats.')

print(mo8.group)