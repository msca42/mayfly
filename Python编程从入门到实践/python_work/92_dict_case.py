# 6.6 
favorite_languages = {
  'jen':'python',
  'sarah':'c',
  'edward':'rust',
  'phil':'python',
}

for name, language in favorite_languages.items():
  print(f"{name.title()}'s favorite lanuage is {language.title()}.")

names = ['jen','a','b','c','sarah']
for name in favorite_languages.keys():
  if name in names:
    print(f"Tnank you, {name}")
  else:
    print(f"please join us, {name}")