from pathlib import Path

path = Path('learn_python.txt')
contents = path.read_text()

lines = contents.splitlines()
for i in range(len(lines)):
    lines[i] = lines[i].replace('Python', 'C')

print(lines)