import easygui
name = easygui.enterbox("please input your name: ")
street = easygui.enterbox("please input your street: ")
province = easygui.enterbox("please input your province: ")
postcode = easygui.enterbox("please input your postcode: ")

easygui.msgbox(name + "\n" + street + "\n" + province + "\n" + postcode)