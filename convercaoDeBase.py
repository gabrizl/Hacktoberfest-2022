print('\033[30m**'*10)
print('Conversão de base...')
print('**'*10)
n = int(input('Digite um número inteiro: '))
print('Escolha entre três bases para a conversão:\n '
      '\033[1;32m1 - Para Binário \n '
      '\033[1;33m2 - Para Octal \n '
      '\033[1;34m3 - Para Hexadecimal')
c = int(input('\033[30mPara qual base deseja realizar a conversão? '))
print(' ')
if c == 1:
    print('\033[1;32mVocê escolheu Binário...')
    print('O numéro {} na base Binária é {}\033[m' .format(n, bin(n)[2:]))
elif c == 2:
    print('\033[1;33mVocê escolheu Octal... ')
    print('O numéro {} na base Octal é {}\033[m' .format(n, oct(n)[2:]))
elif c == 3:
    print('\033[1;34mVocê escolheu Hexadecimal...')
    print('O número {} na base Hexadecimal é {}\033[m' .format(n, hex(n)[2:]))
else:
    print('\033[1;31mOpção Inválida, tente novamente...\033[m')
