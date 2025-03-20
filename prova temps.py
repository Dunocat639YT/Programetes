from datetime import datetime
hora_actual = datetime.now().hour

if hora_actual < 12:
    print("Bon dia!")
elif hora_actual < 18:
    print("Bona tarda!")
elif hora_actual < 21:
    print("Bona vesprada!")
else:
    print("Bona nit!")