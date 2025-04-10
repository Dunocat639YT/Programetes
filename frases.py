import random
import time

sustantius = ["croqueta", "llampuga", "patatòfon", "xurrointerior", "gambot", "motxillògraf", "papapastís", "gatambó", "Masha", "coliflor emocional", "flam còsmic", "carbasseta voladora", "sandalieta rebel", "dracofonista", "mocador existencial", "botifarrímetre", "ratolí de sabó", "galet psicodèlic", "peixicorn", "coixí bufador"]
adjectius = ["galàctic", "croquetós", "espatarrant", "flonjo", "pastanagós", "retorçut", "moixiganguer", "tòxic de festa", "hipervibrant", "cruixent", "confús professional", "interdimensional", "tristònic", "espaguètic", "invisible quan plou", "calamarenc", "festucaire", "absurdet", "desubicat còsmic", "meravellosament patètic", "menjador"]
verbs = ["saltant com una croqueta", "plorant purpurina", "cridant a l'univers", "fugint d'un flam", "ballant sardanes intergalàctiques", "mossegant núvols", "riellant sense motiu", "caminant al revés", "parlant amb plantes", "grunyint en Morse", "espatllant dimensions", "flotant en xocolata", "dibuixant somnis", "obrint portals de iogurt", "descobrint sabates amb ànima", "xerrant amb gats filòsofs", "cantant òpera sota l'aigua", "ensumant l'aire del passat", "rebotant en matalassos invisibles", "vomitant confeti"]

quantes_frases = 1

def app():
    for _ in range(quantes_frases):
        s = random.choice(sustantius)
        a = random.choice(adjectius)
        v = random.choice(verbs)
        frase = f"Un {s} {a} està {v}."
        print(frase)
        print()
        time.sleep(1)

        continuar = input("Prem enter per a continuar... ")

while True:
    app()