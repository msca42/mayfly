# 6.10
favorite_numbers = {
  'a':{
    "number_one":1,
    "number_two":2,
  },
  'b':{
    "number_one":3,
    "number_two":4,
  },
  'c':{
    "number_one":5,
    "number_two":6,
  },
  'd':{
    "number_one":7,
    "number_two":8,
  },
  'e':{
    "number_one":9,
    "number_two":10,
  },
}
for name,number_infos in favorite_numbers.items():
  print(f"{name}:{number_infos}")