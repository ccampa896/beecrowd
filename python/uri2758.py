import struct
while True:
    try:
        num1 = list(map(float, input().split()))
        d = struct.pack('ff', num1[0], num1[1])
        num1 = list(struct.unpack('ff', d))
        num2 = list(map(float, input().split()))
        d1 = struct.pack('dd', num2[0], num2[1])
        num2 = struct.unpack('dd', d1)
        
        print('A = %f, B = %f' % (num1[0], num1[1]))
        print('C = %f, D = %f' % (num2[0], num2[1]))
        print('A = %.1f, B = %.1f' % (num1[0], num1[1]))
        print('C = %.1f, D = %.1f' % (num2[0], num2[1]))
        print('A = %.2f, B = %.2f' % (num1[0], num1[1]))
        print('C = %.2f, D = %.2f' % (num2[0], num2[1]))
        print('A = %.3f, B = %.3f' % (num1[0], num1[1]))
        print('C = %.3f, D = %.3f' % (num2[0], num2[1]))
        print(f'A = {num1[0]:.3E}, B = {num1[1]:.3E}')
        print(f'C = {num2[0]:.3E}, D = {num2[1]:.3E}')
        print(f'A = %.0f, B = %.0f' % (num1[0], num1[1]))
        print(f'C = %.0f, D = %.0f' % (num2[0], num2[1]))
    except EOFError:
        break