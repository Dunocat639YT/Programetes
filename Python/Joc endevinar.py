import random
import time
from datetime import datetime
import os
import sys

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
    hora = ("Bon dia")
elif hora_actual < 18:
    hora = ("Bona tarda")
elif hora_actual < 21:
    hora = ("Bona tarda")
else:
    hora = ("Bona nit")

# Comença el joc
def joc_endevina():
    numero_secret = random.randint(1, 100)
    intents = 0
    
    # Salutació
    print(f"{YELLOW}{hora}, benvingut al joc! He pensat un número entre 1 i 100. A veure si l’endevines!{RESET}")
    time.sleep(2)
    print(" ")

    while True: 
        try: 
            # Pregunta el número
            endevina = int(input(f"{GREEN}Quin número creus que he pensat?{RESET} "))
            intents += 1
            print(" ")

            # Comprova si el número és correcte i dona una pista a l'usuari
            if endevina > numero_secret:
                print(f"{RED}El número que he pensat és més petit!{RESET}")
                print(" ")
            elif endevina < numero_secret:
                print(f"{RED}El número que he pensat és més gran!{RESET}")
                print(" ")
            else:
                print(f"{YELLOW}Felicitats! Has endevinat el número{RESET} {PURPLE}{numero_secret}{RESET} {YELLOW}en{RESET} {PURPLE}{intents}{RESET} intents.")
                time.sleep(10)
                print(" ")
                break
        # Si l'usuari és un tros de quòniam i no introdueix un número
        except ValueError:
            print(" ")
            print(f"{RED}Escolta, tros de quòniam, has d'introduir un número sencer!{RESET}")
            time.sleep(2)
            print(" ")

# Executa tot el joc
joc_endevina()
os.system("pause")
os.execv(sys.executable, [sys.executable] + sys.argv)