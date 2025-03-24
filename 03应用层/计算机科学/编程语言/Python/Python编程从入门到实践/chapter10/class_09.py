from pathlib import Path

try:
    filenames = ['cats.txt','dogs.txt']

    for filename in filenames:
        path = Path(filename)
        content = path.read_text()
        print(content)
except FileNotFoundError:
    print("一条友好消息")