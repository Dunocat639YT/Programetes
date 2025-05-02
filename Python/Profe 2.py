import time
from datetime import datetime
hora_actual = datetime.now().hour

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
PURPLE = "\033[95m"
RESET = "\033[0m"

# Salutació
print(" ")
print(f"{YELLOW}Привіт{RESET}")
time.sleep(2)
print(" ")

# Pregunta el nom
nom = input(f"{GREEN} як тебе звуть? {RESET}")

# Configura la salutació en funció de l'hora
print(" ")
if hora_actual < 12:
    hora = ("доброго ранку")
elif hora_actual < 18:
    hora = ("доброго дня")
elif hora_actual < 21:
    hora = ("доброго дня")
else:
    hora = ("на добраніч")

# Salutació personalitzada
print(f"{GREEN}{hora}, {nom}! Ви схожі на вчителя.{RESET}")

time.sleep(2)
print(" ")

# Pregunta si és profe
profe = input(f"{GREEN}Ви вчитель? (sí/no){RESET} ").strip().lower()
print(" ")
if profe == "sí":
    print(f"{GREEN}Дуже добре, ви точно робите гарну роботу, {nom}.{RESET}")
else: 
    print(f"{GREEN}Ого, мої інстинкти мене підвели.{RESET}")

time.sleep(2)
print(" ")

# Pregunta com va el dia
com_va = input(f"{GREEN}Як проходить ваш день, містере Пау " + nom + f"? (bé/malament/no ho sé){RESET} ").strip().lower()
print(" ")
if com_va == "bé":
    print(f"{GREEN}Я радий, сподіваюся, що все буде добре.{RESET}")
elif com_va == "malament":
    print(f"{GREEN}Ого, я сподіваюся, що стане краще.{RESET}")
else:
    print(f"{GREEN}Це точно чудово!{RESET}")

time.sleep(2)
print(" ")
if profe == "sí":
    # Pregunta si és un bon profe
    bon_profe = input(f"{GREEN}Чи вважаєте ви себе хорошим учителем? (sí/no/no ho sé){RESET} ").strip().lower()
    print(" ")
    if bon_profe == "sí":
        print(f"{GREEN}Гаразд, це найголовніше.{RESET}")
    elif bon_profe == "no":
        print(f"{GREEN}Ого, це точно неправда.{RESET}")
    elif bon_profe == "no ho sé":
        print(f"{GREEN}Звичайно, не хвилюйтеся!{RESET}")
    else:
        print(f"{GREEN}Цікава відповідь!{RESET}")

# Pregunta què estudia si no és profe
elif profe == "no":
    estudis = input(f"{GREEN}що ти вивчаєш?{RESET} ")
    print(" ")
    print(f"{GREEN}Дуже добре, " + estudis + "." + f" Я впевнений, що у вас все дуже добре.{RESET}")

time.sleep(3)
print(" ")
print(f"{GREEN}Ну, я не знаю, що ще вам сказати. До побачення, добрий пане.{RESET}")
time.sleep(10)