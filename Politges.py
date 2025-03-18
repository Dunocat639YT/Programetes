import os
import sys

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
PURPLE = "\033[95m"
RESET = "\033[0m"

resposta = input(f"{YELLOW}Benvingut a l'aplicació de càlcul de relació de transmissió de politges!{RESET}\n"
                 f"Selecciona {GREEN}1{RESET} si vols calcular-ho amb la {BLUE}velocitat{RESET} i {GREEN}2{RESET} si vols fer-ho amb el {BLUE}diàmetre{RESET}: ")
resposta = int(resposta)
print(" ")
if resposta == 1:
    N2 = input(f"{PURPLE}Posa la velocitat de la politja conduïda, si us plau:{RESET} ")
    print(" ")
    N1 = input(f"{PURPLE}Molt bé, ara la de la politja conductora:{RESET} ")
    print(" ")
    print(f"La relació de transmissió és {GREEN}{str(int(N2) / int(N1))}{RESET}")

if resposta == 2:
    D2 = input("Posa el diàmetre de la politja conduïda, si us plau: ")
    print(" ")
    D1 = input("Molt bé, ara el de la politja conductora: ")
    print(" ")
    print("La relació de transmició és " + str(int(D2) / int(D1)))

if resposta != 1 and resposta !=2:
    print(f"{RED}No has seleccionat cap opcció vàlida, tros de quòniam{RESET}")
    print(" ")
    os.execv(sys.executable, [sys.executable] + sys.argv)
print(" ")
os.system("pause")
print (" ")
os.execv(sys.executable, [sys.executable] + sys.argv)

# M'agrada el pa amb tomàquet
# En realitat m'encanta!
# Juasjuasjuas