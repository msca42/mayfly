# 6.11
cities = {
  "city_a":{
    'country':'country_a',
    'population':100000,
    'fact':'water city'
  },
  "city_b":{
       'country':'country_b',
    'population':200000,
    'fact':'water city'
  },
  "city_c":{
       'country':'country_c',
    'population':300000,
    'fact':'water city'
  },
}

for city_name, city_info in cities.items():
  print(f"{city_name}:{city_info}")