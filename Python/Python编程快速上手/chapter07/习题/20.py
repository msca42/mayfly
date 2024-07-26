import re

numRegex = re.compile(r'^\d{2}|\d{1}[,\d{3}]+$')
mo1 = numRegex.search('42')
print(mo1.group())
mo2 = numRegex.search('1,234')
print(mo2.group())
mo3 = numRegex.search('6,368,745')
print(mo3.group())