import tkinter as tk
from tkinter import tkk
from deep_translator import GoogleTranslator

idiomes = {
    "Català": "ca",
    "Castellà": "es",
    "Anglès": "en",
    "Francès": "fr",
    "Alemany": "de",
    "Italià": "it",
    "Portuguès": "pt",
    "Neerlandès": "nl",
    "ucrainès": "uk",
    "Rus": "ru",
}

pregunta = input("Pryvit, David! Yak spravy?")
if pregunta == "Dobre":
    print("Duzhe dobre!")
elif pregunta == "Pogano":
    print(":(")
