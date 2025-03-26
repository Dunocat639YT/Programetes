nom = input("Com et dius preciós/preciosa/preciose? ")
estat = input(f"Hola, {nom}, com estàs?" ).strip().lower()
if estat == "bé":
    print("M'alegro molt!")
else: 
    print(f"Vaja, ho sento molt, {nom}.")
x= input("Dis-me un numero aleatori ")
y= input("Ara dis-me un altre numero aleatori ")

try:
    print(f"La suma dels dos numeros aleatoris que m'has donat és {int(x)+int(y)}")
except:
    print("No has introduit dos números")
