class Privileges:
    
    def __init__(self):
          self.privileges = ['can add post','can delete post','can be user']
    
    def show_privileges(self):
        for privilege in self.privileges:
            print(privilege)

class Admin:
     def __init__(self):
          pass