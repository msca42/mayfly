class Privileges:
    
    def __init__(self):
          self.privileges = ['can add post','can delete post','can be user']
    
    def show_privileges(self):
        for privilege in self.privileges:
            print(privilege)

privileges = Privileges()

class Admin:
     def __init__(self):
        self.privileges = privileges

admin = Admin()
admin.privileges.show_privileges()

class User:
    def __init__(self):
        pass