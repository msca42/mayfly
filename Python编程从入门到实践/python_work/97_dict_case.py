# 6.7
info_1 = {
  'first_name': "may",
  'last_name':'fly',
  'age': 18,
  'city': 'a',
}
info_2 = {
  'first_name': "may",
  'last_name':'fly',
  'age': 19,
  'city': 'b',
}
info_3 = {
  'first_name': "may",
  'last_name':'fly',
  'age': 20,
  'city': 'c',
}

people = []
people.append(info_1)
people.append(info_2)
people.append(info_3)
for info in people:
  for key, value in info.items():
    print(f"{key}:{value}")