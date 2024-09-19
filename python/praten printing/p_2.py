import datetime
import random

# Define responses to user input
responses = {
    "hi": "Hello! How can I help you?",
    "how are you": "I'm just a computer program, but I'm here to assist you.",
    "bye": "Goodbye! Have a great day!",
    "what's the weather like today": "I can check the weather for you. Please provide me your location.",
    "set a reminder": "Sure, what should I remind you about and when?",
    "give me a tip": "Here's a random tip: " + random.choice(["Drink more water.", "Take short breaks while working."])
}

# Function to generate response
def get_response(user_input):
    return responses.get(user_input.lower(), "I'm not sure how to respond to that.")

# Function to handle reminders
def set_reminder():
    reminder_text = input("Enter the reminder text: ")
    reminder_time = input("Enter the reminder time (HH:MM): ")
    
    # Validate time format
    try:
        reminder_time = datetime.datetime.strptime(reminder_time, "%H:%M").time()
    except ValueError:
        print("Invalid time format. Please use HH:MM.")
        return

    current_time = datetime.datetime.now().time()
    if reminder_time < current_time:
        print("Invalid reminder time. Please choose a future time.")
    else:
        print(f"Chatbot: Reminder set! I will remind you to '{reminder_text}' at {reminder_time}.")

# Function to handle weather inquiries
def get_weather():
    location = input("Enter your location: ")
    # Integrate with a weather API to get real-time weather information
    # Replace the following line with actual weather API integration
    print(f"Chatbot: The weather in {location} is sunny today.")

# Main loop
while True:
    user_input = input("You: ").lower()

    if user_input == 'exit':
        print("Chatbot: Goodbye!")
        break

    response = get_response(user_input)

    if "reminder" in user_input:
        set_reminder()
    elif "weather" in user_input:
        get_weather()
    else:
        print("Chatbot:", response)
