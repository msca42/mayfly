amount = float(input('please input amount'))
if amount <= 10:
    amount = 0.9 * amount
else:
    amount = 0.8 * amount 
print("amount: " + amount)