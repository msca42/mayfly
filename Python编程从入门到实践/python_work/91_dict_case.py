# 6.5 河流
rivers = {
  'nile':'egypt',
  'huanghe':'chinese',
  'changjiang':'chinese'
}
for key, value in rivers.items():
  print(f"The {key.title()} runs through {value.title()}")