o = input()


M = []
for i in range(12):
  linha = []
  for j in range(12):
    linha.append(float(input()))
  M.append(linha)
soma = 0
for i in range(12):
  for j in range(12):
    if i > j:
      soma += M[i][j]

if o == "S":
  print(soma)
else:
  media = soma/66
  print(round(media,1))
