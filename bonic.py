import time

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
PURPLE = "\033[95m"
RESET = "\033[0m"

def bonic():
    nombre = input(f"{YELLOW}Escriu un nombre de més d'una xifra: ")
    print()
    if len(nombre) < 2:
        print(f"{RED}El nombre ha de tenir més d'una xifra! ")
        print()
        return
    suma = sum(int(digit) for digit in nombre)

    time.sleep(1)

    print(f"{BLUE}La suma dels dígits és: {suma} ")
    print()
    time.sleep(1)

    if suma % 7 == 0:
        print(f"{GREEN}El teu nombre és bonic! ")
        print()
    else:
        print(f"{RED}El teu nombre no és bonic. ")
        print()

    time.sleep(2)

while True:
    bonic()
    continuar = input(f"{PURPLE}Vols provar una altre nombre? (S/N): ").strip().upper()
    print()
    if continuar == "S":
        print(f"{GREEN}Molt bé! Anem a provar-ho! ")
        print()
        time.sleep(1)

    elif continuar == "N":
        print(f"{BLUE}Adéu! Fins aviat! ")
        print()
        time.sleep(3)
        break
    else:
        print(f"{RED}És igual, continuem.  ")
        print()
        time.sleep(1)