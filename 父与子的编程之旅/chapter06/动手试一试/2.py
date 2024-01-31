import easygui

name  = easygui.enterbox("请输入姓名")
street = easygui.enterbox("请输入街道")
city = easygui.enterbox("请输入城市")
youbian = easygui.enterbox("请输入邮编")
easygui.msgbox(name + "\n" + street + "\n"
               + city + "\n" + youbian + "\n")