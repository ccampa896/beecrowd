andar = []
total = 0
tent = []
for i in range(3):
    num = int(input())
    andar.append(num)
total += (andar[1] * 2)
total += (andar[2] * 4)
tent.append(total)
total = 0
total += (andar[0] * 2)
total += (andar[2] * 2)
tent.append(total)
total = 0
total += (andar[0] * 4)
total += (andar[1] * 2)
tent.append(total)
print(min(tent))