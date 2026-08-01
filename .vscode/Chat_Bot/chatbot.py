print("=== Simple ChatBot ===")

while True:
    user = input("You: ").lower()

    if user == "hi" or user == "hello":
        print("Bot: Hello! How are you?")

    elif user == "what's your name?" or user == "what is your name?":
        print("Bot: I'm ChatBot.")

    elif user == "who created you?":
        print("Bot: Debnath is building me.")

    elif user == "what is python?":
        print("Bot: Python is a programming language.")

    elif user == "tell me a joke":
        print("Bot: Why do programmers prefer dark mode? Because light attracts bugs!")

    elif user == "bye":
        print("Bot: Goodbye! Have a nice day.")
        break

    else:
        print("Bot: Sorry, I don't understand that.")