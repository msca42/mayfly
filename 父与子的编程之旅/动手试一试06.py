# 使用GUI修改以下程序,不使用print()和input()
"""
print("This program converts Fahrenheit to Celsius.")
fahrenheit = float(input("Type in a temperature in Fahrenheit"))
celsius = (fahrenheit - 32) * 5.0 / 9
print("That is  ", end='')
print(celsius, end='')
print(" degrees Celsius.")
"""
import easygui

easygui.msgbox("This program converts Fahrenheit to Celsius.")
fahrenheit = float(easygui.integerbox("Type in a temperature in Fahrenheit"))
celsius = (fahrenheit - 32) * 5.0 / 9
easygui.msgbox("That is " + str(celsius) + " degrees Celsius.")

# 询问用户姓名，街道，城市，省份，邮政编码
name = easygui.enterbox("please input your name")
street = easygui.enterbox("please input your street")
city = easygui.enterbox("please input your city")
province = easygui.enterbox("please input your province")
postcode = easygui.enterbox("please input your postcode")
easygui.msgbox(name + "\n" + street + "\n" + city + "," + province + "\n" + postcode)
