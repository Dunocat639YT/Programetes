from ursina import *

app = Ursina()

e1 = Entity(model = "cube", color = color.brown, texture = "brick", position = (0, 0, 0), rotation = (0, 40, 0), scale = (3,3,3))
hello = Button(text = "Hello", color = color.azure, position = (0, 0, 0), scale = (0.2, 0.1, 0), on_click = destroy)

jaja = Text(text = "caca", color = color.brown, position = (0, -0.2, 0), scale = (0.2, 0.1, 0))
app.run()