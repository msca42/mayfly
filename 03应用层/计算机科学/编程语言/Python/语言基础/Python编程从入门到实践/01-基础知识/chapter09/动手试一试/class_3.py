class User:

    def __init__(self,first_name,last_name,login_attempts):
        self.first_name = first_name
        self.last_name = last_name
        self.login_attempts = login_attempts

    def describe_user(self):    
        pass

    def greet_user(self):
        pass

user = User("may","fly",1)
user.describe_user()
user.greet_user()

