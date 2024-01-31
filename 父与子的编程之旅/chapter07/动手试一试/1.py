money = float(input("购买金额是多少元"))
if money <= 10:
  money *= 0.9
  print("享受9折优惠，最终价格", money)
else:
  money *= 0.8
  print("享受8折优惠，最终价格", money)
