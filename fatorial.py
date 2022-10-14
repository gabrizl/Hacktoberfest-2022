def fatorial(num, show=' '):
    """
    -> Calcula o Fatorial de um número.
    :param num: O número a ser calculado
    :param show: Mostrar ou não o calculo.
    :return: O valor fatorial do número.
    """

    fat = 1
    print('O fatorial de {} é: '.format(num), end='')
    if show == 'S':
        for cont in range(num, 0, -1):
            fat *= cont
            print('{}'.format(cont), end='')
            if cont > 1:
                print(' x ', end='')
            else:
                print(' = ', end='')
        return fat
    elif show == 'N':
        for cont in range(num, 0, -1):
            fat *= cont
        return fat


#programa principal
numero = int(input('Digite um número para saber seu fatorial: '))
resp = ' '
while resp not in 'SN':
    resp = str(input('Deseja mostrar os cálculos? [S/N] ')).strip().upper()[0]
print(fatorial(numero, resp))
