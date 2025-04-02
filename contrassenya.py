import time

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
PURPLE = "\033[95m"
RESET = "\033[0m"



def programa():
    contrassenya_adivinada = False
    intents = 0
    contrassenya_guardada = open("contrassenya1.txt", "r").read()

    while not contrassenya_adivinada:
        print()
        contrassenya_posada = input(f"{YELLOW}Introdueix la contrassenya: {RESET}")

        if contrassenya_posada == contrassenya_guardada:
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
            intents += 1
        if intents == 3:
            print()
            canviar = input(f"{RED}Has oblidat la contrassenya? Si vols, la pots canviar. Y/N? {RESET}")
            if canviar.lower() == "y":
                print()
                nova_contrassenya = input(f"{YELLOW}Introdueix la nova contrassenya: {RESET}")
                with open("contrassenya1.txt", "w") as arxiu:
                    arxiu.write(nova_contrassenya)
                contrassenya_guardada = open("contrassenya1.txt", "r").read()
                print()
                print(f"{GREEN}La contrassenya s'ha canviat correctament!{RESET}")
                time.sleep(1)
                intents = 0
            else:
                print()
                print(f"{YELLOW}D'acord{RESET}")
                intents = 0
while True:
    programa()