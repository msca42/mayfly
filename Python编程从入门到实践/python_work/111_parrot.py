# 如何退出-选择一个退出值
# 退出值的缺陷是导致退出的原因很多
# 改进措施：使用标志flag
prompt = "\nTell me something, and I will repeat it back to you: "
prompt += "\nEnter 'quit' to end the program."

active = True
while active:
  message = input(prompt)
  # 缺点，会打印quit
  if message == 'quit':
      active = False
  else:
      print(message)