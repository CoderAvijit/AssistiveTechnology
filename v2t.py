#import serial;

#arduinoData= serial.Serial('COM10',9600)

import speech_recognition as sr
r=sr.Recognizer()


with sr.Microphone() as source:
    print("System is listening.........")
    audio=r.listen(source)

   # R = r.recognize_google(audio)
try:
    print("System predicts:" +r.recognize_google(audio))
except Exception:
    print("Something went wrong")