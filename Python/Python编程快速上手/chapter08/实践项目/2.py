"""
如果用户输入正确的答案，程序将显示“Correct!”并停留1秒，然后转到下一个问
题。
在程序进入下一个问题之前，用户有3次输入正确答案的机会。
首次显示问题8秒后，该问题的答案将被标记为不正确，即使用户之后输入了正确的
答案。
"""
import time
correct = 42
chance = 0
timeout = False  
start_time = time.time()  
while chance < 3 and not timeout:
    chance += 1
    number = int(input('please input a number'))
    if time.time() - start_time > 8:  
        timeout = True  
        print("Time's up! Answer marked incorrect.") 
        break 
    if number == correct:
        print('Correct!')
        time.sleep(1)
    else:
        print('the answer is incorrect')
    
