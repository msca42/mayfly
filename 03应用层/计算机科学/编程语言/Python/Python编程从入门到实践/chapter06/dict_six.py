favorite_languages = {
    'jen':'python',
    'sarah':'c',
    'edward':'rust',
    'phil':'python',
}

names = ['jen','sarah','a','b']

for name in favorite_languages:
    if name in names:
        print(f"{name},Thank you!")
    else:
        print(f"{name},please join us!")