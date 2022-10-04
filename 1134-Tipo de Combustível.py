somaA = somaG = somaD = 0
x = int(input())
while x != 4:
  x = int(input())
  if x == 1:
    somaA = somaA + 1
  if x == 2:
    somaG = somaG + 1
  if x == 3:
    somaD = somaD + 1
print("MUITO OBRIGADO")
print("Alcool:",somaA)
print("Gasolina:",somaG)
print("Diesel:",somaD)
