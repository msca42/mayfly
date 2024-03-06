def collatz(number):
  if number % 2 == 0:
    print(number // 2)
    return number // 2
  elif number % 2 == 1:
    print(3 * number + 1)
    return 3 * number + 1

print('请输入一个整数')
try:
  number = int(input())
  while True:
    number = collatz(number)
    if number == 1:
      break
except ValueError:
  print('必须输入一个整数')