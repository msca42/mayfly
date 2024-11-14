motorcycles= ['honda','yamaha','suzuki']

print(motorcycles)

motorcycles[0] = 'dycati1'
print(motorcycles)

motorcycles.append('dycati2')
print(motorcycles)

motorcycles.insert(0,'dycati3')
print(motorcycles)

del motorcycles[0]
print(motorcycles)


popped_motorcycle = motorcycles.pop()
print(popped_motorcycle)

motorcycles.remove('dycati1')
print(motorcycles)


print(motorcycles[-1])