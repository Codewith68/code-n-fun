import pyttsx3
import speech_recognition
import requests
from bs4 import BeautifulSoup
import datetime
from Dictapp import openappweb
from Dictapp import closeappweb
import os
import pyautogui


engine = pyttsx3.init("sapi5")
voices = engine.getProperty("voices")
engine.setProperty("voices", voices[0].id)
engine.setProperty("rate", 170)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def takeCommand():
    r = speech_recognition.Recognizer()
    with speech_recognition.Microphone() as source:
        print("Listening.....")
        r.pause_threshold = 1
        r.energy_threshold = 300
        audio = r.listen(source, 0, 4)
    try:
        print("understanding..")
        query = r.recognize_google(audio, language='en-in')
        print(f"you said : {query}\n")
    except Exception as e:
        print("say that again ")
        return "None "
    return query
def alarm(query):
    timehere = open("Alarmtext.txt","a")
    timehere.write(query)
    timehere.close()
    os.startfile("alarm.py")

if __name__ == "__main__":
    while True:
        query = takeCommand().lower()
        if "wake up " in query:
            from greet_me import greetMe
            greetMe()
            while True:
                query = takeCommand().lower()
                if "go to sleep" in query:
                    speak("ok , you can call me any time ")
                    break
                elif "hello" in query:
                    speak("Hello sir, how are you ?")
                elif "i am fine" in query:
                    speak("that's great, sir")
                elif "how are you" in query:
                    speak("Perfect, sir")
                elif "thank you" in query:
                    speak("you are welcome, sir")
                elif "pause" in query:
                    pyautogui.press("k")
                    speak("video paused")
                elif "play" in query:
                    pyautogui.press("k")
                    speak("video played")
                elif "mupyautoguite" in query:
                    pyautogui.press("m")
                    speak("video muted")
                elif "volume up" in query:
                    from keyboard import volumeup
                    speak("Turning volume up,sir")
                    volumeup()
                elif "volume down" in query:
                    from keyboard import volumedown
                    speak("Turning volume down, sir")
                    volumedown()    
                elif "open" in query:
                    openappweb(query)
                elif "close" in query:
                    closeappweb(query)    
                elif "google" in query:
                     from searchnow import searchGoogle
                     searchGoogle(query)
                elif "Youtube" in query :
                    from searchnow import searchYoutube
                    searchYoutube(query)
                elif "wikipedia" in query:
                    from searchnow import searchWikipedia
                    searchWikipedia(query)
                elif "temperature" in query:
                     search = "temperature in khordha"
                     url = f"https://www.google.com/search?q={search}"
                     r  = requests.get(url)
                     data = BeautifulSoup(r.text,"html.parser")
                     temp = data.find("div", class_ = "BNeawe").text
                     speak(f"current{search} is {temp}")
                elif "weather" in query:
                    search = "temperature in khordha"
                    url = f"https://www.google.com/search?q={search}"
                    r  = requests.get(url)
                    data = BeautifulSoup(r.text,"html.parser")
                    temp = data.find("div", class_ = "BNeawe").text
                    speak(f"current{search} is {temp}")
                elif "set an alarm" in query:
                    print("input time example:- 10 and 10 and 10")
                    speak("Set the time")
                    a = input("Please tell the time :- ")
                    alarm(a)
                    speak("Done,sir")
                elif "the time" in query:
                    strTime = datetime.datetime.now().strftime("%H:%M")    
                    speak(f"Sir, the time is {strTime}")
                elif "finally sleep" in query:
                    speak("Going to sleep,sir")
                    exit()               
                     