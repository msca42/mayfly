dict_river = {
    'nile':'egypt',
    'changjiang':'china',
    'huanghe':'china',
}

for key,value in dict_river.items():
    print(f"The {key.title()} runs through {value.title()}")

for key in dict_river.keys():
    print(f"{key}")

for value in dict_river.values():
    print(f"{value}")