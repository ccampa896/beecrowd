while True:
    try:
      num = input().split('.')
      num[0] = int(num[0])
      num[1] = int(num[1])
      num[0] = str(num[0])
      num[1] = str(num[1])
      aux = []
      aux.append(num[1])
      aux.append(num[0])
      num2 = '.'.join(aux)
      print(num2)
    except EOFError:
      break