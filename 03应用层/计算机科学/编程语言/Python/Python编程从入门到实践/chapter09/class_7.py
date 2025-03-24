class User:

    def __init__(self,first_name,last_name,login_attempts):
        self.first_name = first_name
        self.last_name = last_name
        self.login_attempts = login_attempts

    def describe_user(self):    
        pass

    def greet_user(self):
        pass

    def increment_login_attempts(self):
        self.login_attempts += 1

    def reset_login_attempts(self):
        self.login_attempts = 0

class Admin(User):
    def __init__(self, first_name, last_name, login_attempts):
        super().__init__(first_name, last_name, login_attempts)
        self.privileges = ['can add post','can delete post','can be user']
    
    def show_privileges(self):
        for privilege in self.privileges:
            print(privilege)

admin = Admin('may','fly',10)
admin.show_privileges()