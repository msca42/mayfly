# 5.9
# names = ['admin','a','b','c','d']
names = []
if names :
  for name in names:
    if name == 'admin':
      print(f"Hello {name}, would you like to see a status report?")
    else:
      print(f"Hello {name}, thank you for logging in again.")
else:
  print("We need to find some users!")
