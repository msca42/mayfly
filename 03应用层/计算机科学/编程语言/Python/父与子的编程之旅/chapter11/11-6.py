print("\tDog \tBun \tKetchup\tMustard\tOnions")
count = 1
for dog in [0,1]:
    for bun in [0,1]:
        for ketchup in [0,1]:
            for mustard in [0,1]:
                for onion in [0,1]:
                    print("#",count,"\t",end='')
                    print(dog, "\t",bun,"\t",ketchup,
                          "\t",end='')
                    print(mustard,"\t",onion)
                    count = count +  1
                    