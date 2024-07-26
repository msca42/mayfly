import pyinputplus as pyip

bread = pyip.inputMenu(choices=['wheat','white','sourdough'])
breadprice = 1
protein = pyip.inputMenu(choices=['chicken','turkey','ham','tofu'])
proteinprice = 2
cheeseYN = pyip.inputYesNo('Do you need cheese')
cheeseprice = 3
mayoYN = pyip.inputYesNo('Do you need mayo')
mayoprice = 4
mustardYN = pyip.inputYesNo('Do you need mustard')
mustardprice = 5
lettuceYN = pyip.inputYesNo('Do you need lettuce')
lettuceprice = 6
tomatoYN = pyip.inputYesNo('Do you need tomato')
tomatoprice = 7
sandwitchNum = pyip.inputInt('How many do you want? ',greaterThan=1)
if cheeseYN:
    pyip.inputMenu(choices=['cheddar','Swiss','mozzarella'])
    cost =  (breadprice + proteinprice + cheeseprice  + mayoprice + mustardprice + lettuceprice + tomatoprice) * sandwitchNum
else:
    cost =  (breadprice + proteinprice   + mayoprice + mustardprice + lettuceprice + tomatoprice) * sandwitchNum

print(f"总花销{cost}")