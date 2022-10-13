f = str(input('Digite uma frase para verificar se é um palindromo: ')) .strip().upper() #ELIMINOU ESPAÇOS ANTES E DEPOIS, DEIXOU MAIUSCULA
palavra = f.split()    #CRIOU UM LISTA DE PALAVRAS, UM VETOR
junto = ''.join(palavra)  #ELIMINOU OS ESPAÇOS INTERNOS E JUNTOU TUDO EM UMA STRING
inverso = ''
'''inverso = junto[::-1]'''
for l in range(len(junto)-1, -1, -1):  #INVERSO DA PALAVRA len -> MOSTRA O TAMANHO DA VARIÁVEL
    inverso += junto[l]
print('Você digitou {} e o seu inverso é {}' .format(junto, inverso))
if inverso == junto:                    #TESTE VERIFICANDO SE EXISTE PALINDROMO
    print('Portanto, a frase É UM PALINDROMO')
else:
    print('Portanto, a frase NÃO É UM PALINDROMO')