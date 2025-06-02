import pyinputplus as pyip

# 定义每种选项的价格
prices = {
    "wheat": 1.0,
    "white": 0.8,
    "sourdough": 1.2,
    "chicken": 2.5,
    "turkey": 2.3,
    "ham": 2.0,
    "tofu": 1.8,
    "cheddar": 0.5,
    "Swiss": 0.6,
    "mozzarella": 0.7,
    "mayo": 0.2,
    "mustard": 0.2,
    "lettuce": 0.3,
    "tomato": 0.4
}

# 询问面包类型
bread_type = pyip.inputMenu(["wheat", "white", "sourdough"], prompt="请选择面包类型：wheat、white或sourdough\n")
total_cost = prices[bread_type]

# 询问蛋白质类型
protein_type = pyip.inputMenu(["chicken", "turkey", "ham", "tofu"], prompt="请选择蛋白质类型：chicken、turkey、ham或tofu\n")
total_cost += prices[protein_type]

# 询问是否要奶酪
want_cheese = pyip.inputYesNo("你是否需要奶酪？(yes/no)\n")
if want_cheese == "yes":
    cheese_type = pyip.inputMenu(["cheddar", "Swiss", "mozzarella"], prompt="请选择奶酪类型：cheddar、Swiss或mozzarella\n")
    total_cost += prices[cheese_type]

# 询问是否需要其他配料
for ingredient in ["mayo", "mustard", "lettuce", "tomato"]:
    want_ingredient = pyip.inputYesNo(f"你是否需要{ingredient}？(yes/no)\n")
    if want_ingredient == "yes":
        total_cost += prices[ingredient]

# 询问三明治数量
num_sandwiches = pyip.inputInt("你想要多少个三明治？请输入一个大于等于1的整数：\n", min=1)
total_cost *= num_sandwiches

# 显示总费用
print(f"你选择的三明治总费用为：${total_cost:.2f}")