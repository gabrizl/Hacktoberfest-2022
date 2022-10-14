print('\033[34m---'*20)
print('Vamos verificar a existência e o tipo de triângulo...')
print('---'*20)

a = float(input('Digite o valor do primeiro seguimento: '))
b = float(input('Digite o valor do segundo seguimento: '))
c = float(input('Digite o valor do terceiro seguimento: '))
if b - c < a < b + c and a - c < b < a + c and a - b < c < a + b:
    print('Estes seguintemos de reta forma um triângulo ', end='')
    if a == b == c:
        print('\033[1;32mEQUILÁTERO!\033[m')
    elif a == b or b == c or a == c:
        print('\033[1;33mISÓSCELES!\033[m')
    elif a != b != c != a:
        print('\033[1;30mESCALENO!\033[m')
else:
    print('\033[1;31mEstes seguimentos NÃO formam um triângulo!')