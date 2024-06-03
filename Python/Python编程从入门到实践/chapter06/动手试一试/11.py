cities = {
    "city_a": {
        "country": "country_a",
        "population": 10000,
        "fact": "the population is 10000"
    },
    "city_b": {
        "country": "country_b",
        "population": 20000,
        "fact": "the population is 20000"
    },
    "city_c": {
        "country": "country_c",
        "population": 30000,
        "fact": "the population is 30000"
    }
}
for key, value in cities.items():
    print(f"{key} and {value}")
