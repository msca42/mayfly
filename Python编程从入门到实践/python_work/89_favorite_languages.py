favorite_languages = {
  'jen':'python',
  'sarah':'c',
  'edward':'rust',
  'phil':'python',
}

for name, language in favorite_languages.items():
  print(f"{name.title()}'s favorite lanuage is {language.title()}.")

# keys() 方法返回所有键
for name in favorite_languages.keys():
  print(name.title())

# values()方法返回一个值列表
print("The following languages have been mentioned:")
for language in favorite_languages.values():
  print(language.title())

# 集合set,去重,函数set(),使用{}表示
print("The following languages have been mentioned:")
for language in set(favorite_languages.values()):
  print(language.title())