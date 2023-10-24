import easygui
flavor = easygui.enterbox("What is your favorite ice cream flavor?",
                          default="Vanilla")
easygui.msgbox("Your entered " + flavor)
