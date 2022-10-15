correto = 0
errado = 0

while True:
    fila_vacina = input()
    if fila_vacina == '###': break

    index = 1
    muda = False
    while index != len(fila_vacina):
        fila_vacina_letra = fila_vacina[index]
        if fila_vacina_letra[index] == 'a' or fila_vacina_letra[index] == 'i' and fila_vacina_letra[index - 1] == 'a':
            muda = True
            errado += 1
            break
        if muda == False:
            correto += 1
print(f'sim: {correto}\nnão: {errado}')