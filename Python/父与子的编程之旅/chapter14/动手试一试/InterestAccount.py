from BankAccount import BankAccount


class InterestAccount(BankAccount):
    def __init__(self, rate):
        self.rate = rate

    def addInterest(self, addNumber):
        self.rate = self.rate + addNumber
