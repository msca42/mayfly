from pathlib import Path
import json

path = Path('favorite_number.json')
content = path.read_text()
number = json.loads(content)
print(number)