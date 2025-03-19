import time
from datetime import datetime
hora_actual = datetime.now().hour

print(" ")
print("Hola")
time.sleep(2)

print(" ")
nom = input("Com et dius? ")

print(" ")
if hora_actual < 12:
    hora = ("Bon dia")
elif hora_actual < 18:
    hora = ("Bona tarda")
elif hora_actual < 21:
    hora = ("Bona vesprada")
else:
    hora = ("Bona nit")

print(f"{hora}, {nom}! Tens pinta de ser profe.")
time.sleep(2)

print(" ")
profe = input("Ets profe? (sí/no) ")
print(" ")
if profe == "sí":
    print(f"Molt bé, segur que estàs fent una bona feina, {nom}.")
else: 
    print("Vaja, els meus instints m'han fallat.")

time.sleep(2)
print(" ")
com_va = input("Com va el dia, senyor " + nom + "? (bé/malament/no ho sé) ")
print(" ")
if com_va == "bé":
    print("M'alegro, espero que tot vagi bé.")
if com_va == "malament":
    print("Vaja, espero que millori.")
if com_va == "no ho sé":
    print("Segur que genial!")

time.sleep(2)
print(" ")
if profe == "sí":
    bon_profe = input("Et consideres un bon profe? (sí/no/no ho sé) ")
    print(" ")
    if bon_profe == "sí":
        print("Molt bé, això és el més important")
    if bon_profe == "no":
        print("Vaja, segur que això no és veritat")
    if bon_profe == "no ho sé":
        print("Segur que sí, no et preocupis!")

if profe == "no":
    estudis = input("Què estudies? ")
    print(" ")
    print("Molt bé, " + estudis + "." + " Segur que et va molt bé.")

time.sleep(3)
print(" ")
print("Bé, doncs ja no sé que més dir-te. Adéu bon sinyor.")
time.sleep(10)