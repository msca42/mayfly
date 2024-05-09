favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'rust',
    'phil': 'python',
}

visited_names = ['jen', 'mayfly', 'sarah']
for name in visited_names:
    if name in favorite_languages.keys():
        print(f"Hell {name},Thank you!")
    else:
        print("Please visit our team")
