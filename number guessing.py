import random
nr = random.randint(1, 100)

guess = 0
count = 0

while nr != guess:
    guess = int(input("Mai incearca: "))
    if nr > guess:
        print("Nr e mai mare")
    elif nr < guess:
        print("Nr e mai mic")
    count += 1

print("Felicitari, ai ghicit\nNr era %d" % nr)
print("Ai ghicit in %d" % count)
