valors = list(map(float, input("Introdueix els valors separats per espais: ").split()))
mitjana = sum(valors) / len(valors) if valors else 0
print(f"La mitjana és: {mitjana}")