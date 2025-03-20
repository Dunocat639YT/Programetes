import tkinter as tk

def saludar ():
    label.config(text="Hola, món!")

root = tk.Tk()
root.title("Cosa rara")
root.geometry("400x300")

label = tk.Label(root, text="Prem el botó!", font=("Helvetica", 16))
label.pack()

boto = tk.Button(root, text="Saluda'm!", font=("Arial", 14), command=saludar)
boto.pack()

root.mainloop()