from city_functions import city_country

def test_city_country():
    city_country_name = city_country("shanghai","china")
    assert city_country_name == "shanghai, china - poulation"

def test_city_country_population():
    city_country_name = city_country("shanghai","china",5000000)
    assert city_country_name == "shanghai, china - poulation 5000000"
