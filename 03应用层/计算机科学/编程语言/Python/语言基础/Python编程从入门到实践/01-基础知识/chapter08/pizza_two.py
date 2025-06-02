def make_pizza(*toppings):
    """概述要制作的披萨"""
    print("\nMaking a pizza with the following toppings:")
    for topping in toppings:
        print(f"- {topping}")

make_pizza('pepperoni')
make_pizza('mushrooms','green peppers','extra cheese')