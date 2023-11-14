# 遍历字典
# items()方法，返回一个键值对列表
user_0 = {
  'username':'efermi',
  'first':'enrico',
  'last':'fermi',
}

for key, value in user_0.items():
  print(f"\nkey: {key}")
  print(f"Value:{value}")