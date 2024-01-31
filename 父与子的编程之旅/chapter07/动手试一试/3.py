oil_tank = int(input("请问油箱油多大?"))
oil_now = int(input("请问油箱现在有多满?"))
oil_km = int(input("请问每升油可以走多少千米"))
car_km = oil_tank * oil_now/100 * oil_km
print("Size of tank: ", oil_tank)
print("percent full: ", oil_now)
print("km per liter: ",oil_km)
print("You can go another ", car_km, " km")
print("The next gas station is 200km away")
if car_km - 5 > 200:
  print("You can wait for the next station")
else:
  print("Get gas now!")