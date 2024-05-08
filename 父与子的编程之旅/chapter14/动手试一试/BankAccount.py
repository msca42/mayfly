class BankAccount:
    def __init__(self, accountName, accountNumber, balance):
        self.accountName = accountName
        self.accountNumber = accountNumber
        self.balance = balance

    def show(self):
        print(f"显示余额: {self.balance} 元")

    def addMoney(self, money):
        self.balance += self.balance + money

    def costMoney(self, money):
        self.balance -= self.balance - money


bankAccount = BankAccount("mayfly", 10001, 2333)
bankAccount.show()
