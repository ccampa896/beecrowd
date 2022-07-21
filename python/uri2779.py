total = int(input())
compradas = int(input())

fig = []

for i in range(compradas):
    fig.append(input())
    
album = set(fig)
comp = len(album)
falta = total - comp
print(falta)