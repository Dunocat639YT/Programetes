import time

try:
    nom = input("Com et dius preciós/preciosa/preciose? ")
except:
    print("A veure tros de quòniam, tu et dius número o que?")
finally:
    estat = input(f"Hola, {nom}, com estàs?" ).strip().lower()

if estat == "bé":
    print("M'alegro molt!")
else: 
    print(f"Vaja, ho sento molt, {nom}.")

try:
    x = input("Dis-me un numero aleatori ")
    y = input("Ara dis-me un altre numero aleatori ")
except:
    print("Sembla que la inteligència no és lo teu.")
    time.sleep(1)
    print("He dit un número.")
    time.sleep(2)
    print("Tros.")
    time.sleep(1)
    print("De.")
    time.sleep(1)
    print("Quòniam.")
    time.sleep(1)

try:
    print(f"La suma dels dos numeros aleatoris que m'has donat és {int(x)+int(y)}")
except:
    print("No has introduit dos números")
