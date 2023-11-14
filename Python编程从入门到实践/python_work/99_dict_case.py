# 6.9
favorite_places = {
  'name_a':{
    "palce_a":"a",
    "palce_b":"b",
  },
  'name_b':{
    "place_c":"c",
    "place_d":"d",
  },
  'name_c':{
    "place_e":"e",
    "place_f":"f"
  }
} 
for name,places  in favorite_places.items():
    print(f"{name}:{places}")