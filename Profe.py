import time
from datetime import datetime
hora_actual = datetime.now().hour

# Salutació
print(" ")
print("Hola")
time.sleep(2)
print(" ")

# Pregunta el nom
nom = input("Com et dius? ")

# Configura la salutació en funció de l'hora
print(" ")
if hora_actual < 12:
    hora = ("Bon dia")
elif hora_actual < 18:
    hora = ("Bona tarda")
elif hora_actual < 21:
    hora = ("Bona vesprada")
else:
    hora = ("Bona nit")

# Salutació personalitzada
print(f"{hora}, {nom}! Tens pinta de ser profe.")

time.sleep(2)
print(" ")

# Pregunta si és profe
profe = input("Ets profe? (sí/no) ").strip().lower()
print(" ")
if profe == "sí":
    print(f"Molt bé, segur que estàs fent una bona feina, {nom}.")
else: 
    print("Vaja, els meus instints m'han fallat.")

time.sleep(2)
print(" ")

# Pregunta com va el dia
com_va = input("Com va el dia, senyor " + nom + "? (bé/malament/no ho sé) ").strip().lower()
print(" ")
if com_va == "bé":
    print("M'alegro, espero que tot vagi bé.")
elif com_va == "malament":
    print("Vaja, espero que millori.")
else:
    print("Segur que genial!")

time.sleep(2)
print(" ")
if profe == "sí":
    # Pregunta si és un bon profe
    bon_profe = input("Et consideres un bon profe? (sí/no/no ho sé) ").strip().lower()
    print(" ")
    if bon_profe == "sí":
        print("Molt bé, això és el més important")
    elif bon_profe == "no":
        print("Vaja, segur que això no és veritat")
    elif bon_profe == "no ho sé":
        print("Segur que sí, no et preocupis!")
    else:
        print("Interessant resposta!")

# Pregunta què estudia si no és profe
elif profe == "no":
    estudis = input("Què estudies? ")
    print(" ")
    print("Molt bé, " + estudis + "." + " Segur que et va molt bé.")

time.sleep(3)
print(" ")
print("Bé, doncs ja no sé que més dir-te. Adéu bon sinyor.")
time.sleep(10)