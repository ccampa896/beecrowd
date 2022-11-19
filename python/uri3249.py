qtd = int(input())
loss = 0
for i in range(qtd):
    l = list(input())
    for i in range((len(l)-1)):
        if l[i] == 'C':
            if l[i+1] == 'D':
                loss = loss + 1
win = qtd - loss
print(win)