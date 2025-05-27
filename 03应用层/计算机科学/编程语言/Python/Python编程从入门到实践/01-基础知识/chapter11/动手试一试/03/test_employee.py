from employee import Employee

def test_give_default_raise():
    emplyee = Employee('a','b',0)
    salary = emplyee.give_raise()
    assert salary == 5000

def test_give_custom_raise():
    emplyee = Employee('a','b',0)
    salary = emplyee.give_raise(10000)
    assert salary == 10000