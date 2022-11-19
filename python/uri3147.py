e = map(int, input().split())

e = list(e)

b = e[0] + e[1] + e[2] + e[5]
m = e[3] + e[4]

if b >= m:
    print('Middle-earth is safe.')
else:
    print('Sauron has returned.')