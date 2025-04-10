from pathlib import Path

try:
    filenames = ['cats.txt','dogs.txt']

    for filename in filenames:
        path = Path(filename)
        content = path.read_text()
        print(content)
except FileNotFoundError:
    pass