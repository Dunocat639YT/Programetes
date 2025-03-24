import tkinter as tk

def canviar_text():
    etiqueta.config(text = "Has fet clic!", font = ("Helvetica", 16))

root = tk.Tk()
root.title("Programeta")
root.geometry("400x300")

etiqueta = tk.Label(root, text = "Fes clic al botó", font = ("Helvetica", 16))
etiqueta.pack(pady = 10)

boto = tk.Button(root, text = "Clica'm", font = ("Helvetica", 16), command = canviar_text)
boto.pack()

root.mainloop()