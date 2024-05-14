class Dog:
    """一次模拟小狗的简单测试"""

    def __init__(self, name, age):
        """初始化属性name 和age"""
        self.name = name
        self.age = age

    def sit(self):
        """模拟小狗收到命令时坐下"""
        print(f"{self.name} is now sitting,")

    def roll_over(self):
        """模拟小狗收到命令时打滚"""
        print(f"{self.name} rolled over!")


my_dog = Dog('willie', 6)
print(f"My dog's name is {my_dog.name}")
my_dog.sit()
my_dog.roll_over()
