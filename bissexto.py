ano = int(input())
resultado = f"{ano} é bissexto" if ano % 4 == 0 or ano % 400 == 0 else f"{ano} não é bissexto"
print(resultado)
