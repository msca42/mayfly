def collatz(number):
  if(number % 2 == 0):
    print(number // 2)
    return number // 2
  else:
    print(3 * number  + 1)


while True:
  try:
    number = int(input())
    result =  collatz(number)
    if (result == 1):
      break
  except ValueError:
    print('必须输入一个整数')


