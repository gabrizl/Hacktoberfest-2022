graus = float(input())
minutos = float(input())
segundos = float(input())

convert = (graus + (minutos / 60) + segundos / 3600)

print(f'graus = {convert:.4f}')

