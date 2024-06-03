def make_car(maker, model, **kwargs):
    kwargs["maker"] = maker
    kwargs["model"] = model

    return kwargs


car = make_car('subaru', 'outback', color='blue', tow_package=True)
print(car)
