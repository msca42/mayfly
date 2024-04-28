tankSize = int(input("please input size of tank: "))
perentFull = int(input("please input percent full: "))
kmPerLiter = int(input("please input km per liter: "))
distance = int(tankSize * perentFull / 100 * kmPerLiter)
print("You an go another " + str(distance) + " km.")
print("The next gas ")
if distance > 200:
    print("You can wait for the next station")
else:
    print("Get gas now!")
