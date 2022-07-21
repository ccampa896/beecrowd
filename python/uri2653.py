total = []
while True:
    try:
        joias = input()
        total.append(joias)
    except EOFError:
        break
total = set(total)
print(len(total))