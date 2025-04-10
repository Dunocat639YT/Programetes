counter = 0


def incrementer():
    global counter
    counter += 1


for i in range(5):
    incrementer()

print(counter)
