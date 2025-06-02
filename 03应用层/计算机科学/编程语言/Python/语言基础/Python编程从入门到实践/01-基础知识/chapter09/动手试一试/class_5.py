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

user = User("may","fly",1)
user.describe_user()
user.greet_user()



user1 = User("may1","fly1",1)
user1.increment_login_attempts()
print(user1.login_attempts)
user1.reset_login_attempts()
print(user1.login_attempts)