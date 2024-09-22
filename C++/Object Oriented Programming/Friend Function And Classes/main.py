import speech_recognition as sr
from gtts import gTTS
import os

def listen():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        audio = r.listen(source)
        try:
            text = r.recognize_google(audio)
            print("You said: " + text)
            return text
        except sr.UnknownValueError:
            print("Sorry, I couldn't understand that.")
            return ""
            
def speak(text):
    tts = gTTS(text)
    tts.save("output.mp3")
    os.system("mpg123 output.mp3")

def process_command(command):
    if "hello" in command:
        speak("Hello! How can I assist you?")
    elif "weather" in command:
        speak("The weather today is sunny.")
    # Add more commands and responses as needed

# Main loop
while True:
    user_input = listen().lower()
    if user_input == "exit":
        break
    process_command(user_input)
