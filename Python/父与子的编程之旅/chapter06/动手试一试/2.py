import easygui
name = easygui.enterbox("Please input your name")
street = easygui.enterbox("Please input your street")
city = easygui.enterbox("Please input your city")
zip = easygui.enterbox("Please input your zip")
easygui.msgbox(name + "\n" + street + "\n"
               + city + "\n" + zip)
