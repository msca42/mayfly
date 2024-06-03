requested_toppings = ['mushrooms', 'green pepers', 'extra cheese']

for requested_topping in requested_toppings:
    if requested_topping == 'green papers':
        print("Sorry, we are out of green pappers right now.")
    else:
        print(f"Adding {requested_topping}")

print("\nFinished making your pizza!")
