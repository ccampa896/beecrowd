qtd = int(input())
c = input()

j = []

if c == 'A':
    j = [1, 0, 0]
elif c == 'B':
    j = [0, 1, 0]
else:
    j = [0, 0, 1]
    
a = 0
for i in range(qtd):
    a = int(input())
    if a == 1:
        c = j[0]
        j[0] = j[1]
        j[1] = c
    elif a == 2:
        c = j[1]
        j[1] = j[2]
        j[2] = c
    else:
        c = j[2]
        j[2] = j[0]
        j[0] = c

for i in range(3):
    if j[i] == 1 and i == 0:
        print('A')
    elif j[i] == 1 and i == 1:
        print('B')
    elif j[i] == 1 and i == 2:
        print('C')
