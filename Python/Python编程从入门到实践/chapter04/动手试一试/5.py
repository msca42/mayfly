import time
numbers = [number for number in range(1,1_000_001)]
if min(numbers) == 1 and max(numbers) == 1_000_000:
    print("true")
else :
    print("false")
now1 = time.time()
sum(numbers)
now2 = time.time()
print(now2 - now1)