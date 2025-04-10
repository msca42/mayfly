from city_functions import city_country

def test_city_country():
    city_country_name = city_country("shanghai","china")
    assert city_country_name == "shanghai,china"