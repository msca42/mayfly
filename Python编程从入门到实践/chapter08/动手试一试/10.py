messages = ['short message1', 'short message2', 'short message3']


def show_messages(messages):
    for message in messages:
        print(f"{message}")


sent_messages = []


def send_messages():
    for i in range(len(messages)):
        sent_messages.append(messages.pop())


send_messages()
print(messages)
print(sent_messages)
