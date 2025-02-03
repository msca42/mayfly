import random
import time

# 问题总数
num_questions = 10
# 每个问题的尝试次数
attempts_per_question = 3
# 每个问题的时间限制（秒）
time_limit = 8

correct_answers = 0

for question_num in range(num_questions):
    # 生成两个 0 到 9 之间的随机数
    num1 = random.randint(0, 9)
    num2 = random.randint(0, 9)
    correct_answer = num1 * num2

    print(f"Question {question_num + 1}: What is {num1} x {num2}?")

    for attempt in range(attempts_per_question):
        start_time = time.time()
        try:
            user_answer = int(input())
            end_time = time.time()
            elapsed_time = end_time - start_time

            if elapsed_time > time_limit:
                print("Time's up! The correct answer is", correct_answer)
                break
            elif user_answer == correct_answer:
                print("Correct!")
                time.sleep(1)
                correct_answers += 1
                break
            else:
                if attempt < attempts_per_question - 1:
                    print("Incorrect. Try again.")
                else:
                    print("Out of attempts. The correct answer is", correct_answer)
        except ValueError:
            if attempt < attempts_per_question - 1:
                print("Invalid input. Please enter a number. Try again.")
            else:
                print("Out of attempts. The correct answer is", correct_answer)

print(f"You got {correct_answers} out of {num_questions} questions correct.")