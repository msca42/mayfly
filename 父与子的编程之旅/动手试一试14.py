class BankAccount:
    def __init__(self, account, account_number, balance):
        self.account = account
        self.account_number = account_number
        self.balance = balance

    def show(self):
        print("显示余额", self.balance)

    def add(self, salary):
        self.balance = self.balance + salary

    def move(self, salary):
        self.balance = self.balance - salary


myBankAccount = BankAccount("mayfly", "admin", 10000)
myBankAccount.add(10000)
myBankAccount.show()
myBankAccount.move(5000)
myBankAccount.show()


class InterestAccount(BankAccount):
    def __init__(self, rate):
        BankAccount.__init__(self)
        self.rate = rate

    def addInterest(self):
        self.balance = self.balance * (1 + self.rate)
