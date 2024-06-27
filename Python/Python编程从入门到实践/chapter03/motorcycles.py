motorcycles = ['honda', 'yamaha', 'suzuki']

print(motorcycles)

motorcycles[0] = 'dacati'
print(motorcycles)

motorcycles.append('ducati')
print(motorcycles)

motorcycles.insert(0,'ducati')

del motorcycles[0]
print(motorcycles)

del motorcycles[1]
print(motorcycles)

popped_motorcycle = motorcycles.pop()
print(motorcycles)
print(popped_motorcycle)

last_owned = motorcycles.pop()
print(f"The last motorcycle I owned was a {last_owned.title()}.")


first_owned = motorcycles.pop(0)
print(f"The first motorcycle I owned was a {first_owned.title()}.")

print(motorcycles)
motorcycles.append('ducati')
too_expensive = 'ducati'
motorcycles.remove(too_expensive)
print(motorcycles)
print(f"\nA {too_expensive} is too expensive for me.")