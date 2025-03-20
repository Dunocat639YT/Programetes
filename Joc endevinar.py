import random
import time
from datetime import datetime

# Definir hora actual
hora_actual = datetime.now().hour

# Definir colors
RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
PURPLE = "\033[95m"
RESET = "\033[0m"

# Configurar salutació en funció de l'hora
if hora_actual < 12:
    hora = ("доброго ранку")
elif hora_actual < 18:
    hora = ("доброго дня")
elif hora_actual < 21:
    hora = ("доброго дня")
else:
    hora = ("на добраніч")

# Comença el joc
def joc_endevina():
    numero_secret = random.randint(1, 100)
    intents = 0
    
    #Salutació
    print(f"{YELLOW}{hora}, Ласкаво просимо до гри! Я придумав число від 1 до 100. Давайте перевіримо, чи вгадаєте ви, яке саме!{RESET}")
    time.sleep(2)
    print(" ")

    while True: 
        try: 
            # Pregunta el número
            endevina = int(input(f"{GREEN}Як ви думаєте, яке число я придумав?{RESET} "))
            intents += 1
            print(" ")

            # Comprova si el número és correcte i dona una pista l'usuari
            if endevina > numero_secret:
                print(f"{RED}Число, про яке я думав, менше!{RESET}")
                time.sleep(1)
                print(" ")
            elif endevina < numero_secret:
                print(f"{RED}Число, про яке я думав, більше!{RESET}")
                time.sleep(1)
                print(" ")
            else:
                print(f"{YELLOW}Щиро вітаю! Ви вгадали номер{RESET} {PURPLE}{numero_secret}{RESET} {YELLOW}із{RESET} {PURPLE}{intents}{RESET} спроб.")
                break
        # Si l'usuari és un tros de quòniam i no introdueix un número
        except ValueError:
            print(" ")
            print(f"{RED} Давайте подивимося маленький шматочок quòniam, вам потрібно ввести ціле число!{RESET}")
            time.sleep(2)
            print(" ")

# Executa tot el joc
joc_endevina()