import re

nameRegex = re.compile(r'[A-Z]\w+ [A-Z]\w+',)
mo1 = nameRegex.search('Satoshi Nakamoto')
print(mo1.group())
mo2 = nameRegex.search('Alice Nakamoto')
print(mo2.group())
mo3 = nameRegex.search('RoboCop Nakamoto')
print(mo3.group())
# mo4 = nameRegex.search('satoshi Nakamoto')
# print(mo4.group())
# mo5 = nameRegex.search('Mr. Nakamoto')
# print(mo5.group())
# mo6 = nameRegex.search('Nakamoto')
# print(mo6.group())
mo7 = nameRegex.search('Satoshi nakamoto')
print(mo7.group())