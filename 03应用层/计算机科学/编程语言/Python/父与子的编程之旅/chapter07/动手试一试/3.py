tank = float(input('Size of tank: '))
stock = float(input('percent full: '))
fuel_consumption = float(input('km per liter'))
least_km = tank * stock  * fuel_consumption / 100
print("You can go another" +  least_km + "km")
print("The next gas station is 200 km away")
if least_km >= 200:
    print("You can wait for the next station")
else:
    print("Get gas now!")