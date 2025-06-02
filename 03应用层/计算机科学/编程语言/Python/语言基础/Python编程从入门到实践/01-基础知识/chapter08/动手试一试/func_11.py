message = ["a short message"]

def show_messages(message):
    print(message)

def send_messages(message):
    sent_messages = []
    m = message.pop()
    sent_messages.append(m)
    print(sent_messages)



send_messages(message[:])
show_messages(message)