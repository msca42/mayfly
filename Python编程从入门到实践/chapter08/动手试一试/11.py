messages = ['short message1', 'short message2', 'short message3']


def show_messages(messages):
    for message in messages:
        print(f"{message}")


sent_messages = []

messages2 = messages[:]


def send_messages(messages2):
    for i in range(len(messages2)):
        sent_messages.append(messages2.pop())


send_messages(messages2)
print(messages)
print(sent_messages)
