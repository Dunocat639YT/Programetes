import os
import sys
import time

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
PURPLE = "\033[95m"
RESET = "\033[0m"

# Salutació inicial
print(f"{YELLOW}Benvingut a l'aplicació de càlcul de relació de transmissió de politges!{RESET}")
time.sleep(2)
print()

# Pregunta el mode de càlcul
resposta = input(f"Selecciona {GREEN}1{RESET} si vols calcular-ho amb la {BLUE}velocitat{RESET} i {GREEN}2{RESET} si vols fer-ho amb el {BLUE}diàmetre{RESET}: ")
resposta = float(resposta)
print()

# Càlcul de la relació de transmissió amb la velocitat
if resposta == 1:
    # Pregunta la velocitat de la politja conduïda
    N2 = input(f"{PURPLE}Posa la velocitat de la politja conduïda, si us plau:{RESET} ")
    print()
    # Pregunta la velocitat de la politja conductora
    N1 = input(f"{PURPLE}Molt bé, ara la de la politja conductora:{RESET} ")
    print()
    # Calcula
    resultat1 = round(float(N2) / float(N1), 2)
    # Dona el resultat
    print(f"La relació de transmissió és {GREEN}{resultat1}{RESET}")

    # Quan és reductor de velocitat
    if resultat1 < 1:
        print()
        print(f"Es tracta d'un mecanisme {BLUE}reductor de velocitat{RESET}.")
        time.sleep(2)
    # Quan és multiplicador de velocitat
    elif resultat1 > 1:
        print()
        print(f"Es tracta d'un mecanisme {BLUE}multiplicador de velocitat{RESET}.")
        time.sleep(2)

# Càlcul de la relació de transmissió amb el diàmetre
if resposta == 2:
    # Pregunta el diàmetre de la politja conductora
    D1 = input(f"{PURPLE}Posa el diàmetre de la politja conductora, si us plau:{RESET} ")
    print()
    # Pregunta el diàmetre de la politja conduïda
    D2 = input(f"{PURPLE}Molt bé, ara el de la politja conduïda:{RESET} ")
    print()
    # Calcula
    resultat2 = round(float(D1) / float(D2), 2)
    # Dona el resultat
    print(f"La relació de transmició és {GREEN}{resultat2}{RESET}")

    # Quan és reductor de velocitat
    if resultat2 < 1:
        print()
        print(f"La {BLUE}velocitat{RESET} de la roda conduïda és {BLUE}més gran{RESET} que la de la corriola motriu, però el {BLUE}moment{RESET} eix resultant és {BLUE}menor{RESET}. Per tant es tracta d'un mecanisme {BLUE}reductor de velocitat{RESET}.")
        time.sleep(2)
    # Quan és multiplicador de velocitat
    if resultat2 > 1:
        print()
        print(f"La {BLUE}velocitat{RESET} de la roda conduïda és {BLUE}menor{RESET} que la de la roda motriu, però el {BLUE}moment{RESET} sobre l'eix resultant és {BLUE}més gran{RESET}. Per tant es tracta d'un mecanisme {BLUE}multiplicador de velocitat{RESET}.")
        time.sleep(2)

# Missatge d'error si l'usuari no arrenca el cervell
if resposta != 1 and resposta !=2:
    print(f"{RED}No has seleccionat cap opcció vàlida, tros de quòniam{RESET}")
    time.sleep(2)
    print()
    os.execv(sys.executable, [sys.executable] + sys.argv)

# Finalitza el codi i es torna a executar tot
print()
print(f"{YELLOW}Vols tornar a calcular una altra relació de transmissió?{RESET}")
print()
os.system("pause")
print()
os.execv(sys.executable, [sys.executable] + sys.argv)

# M'agrada el pa amb tomàquet