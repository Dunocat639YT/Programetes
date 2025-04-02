import time

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
PURPLE = "\033[95m"
RESET = "\033[0m"

contassenya_guardada = open("jejeje1.txt", "r").read()

def programa():
    contrassenya_adivinada = False

    while not contrassenya_adivinada:
        print()
        contrassenya_posada = input(f"{YELLOW}Introdueix la contrassenya: {RESET}")

        if contrassenya_posada == contassenya_guardada:
          contrassenya_adivinada = True
          print()
          print(f"{GREEN}La contrassenya és correcta!{RESET}")
          time.sleep(1)
          print()
          input(f"{PURPLE}Prem 'Enter' per continuar... {RESET}")
          break
        else:
            print()
            print(f"{RED}La contrassenya és incorrecta!{RESET}")

while True:
    programa()