import pyttsx3
import datetime
import speech_recognition
engine =pyttsx3.init("sapi5")
voices =engine.getProperty("voices")
engine.setProperty("voices",voices[0].id)
engine.setProperty("rate",200)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def greetMe():
    hour=int(datetime.datetime.now().hour)
    if hour>=0 and hour<=12:
        speak("Good morning ")
    elif hour>12 and hour<=18:
        speak("Good Afternoon  ")
    else :
        speak("Good evening  ")

    speak("Please tell me ,how can i help you  ")        