# 使用用户输入填充字典
responses = {}
# 设置一个标志
polling_active= True

while polling_active:
  name = input("\nWhat is your name? ")
  response = input("Which mountain would you like to climb someday?")

  # 将回答存储在字典中
  responses[name] = response

  
  repeat = input("Would you like to let another person respond?(yes/no)")
  if repeat == 'no':
    polling_active = False
  
print("\n--- Poll Result ---")
for name, response in responses.items():
  print(f"{name} would like to climb {response}.")