N = int(input())

for i in range(N):
  primo = 0
  X = int(input())
  for i in range(2,X):
    if X % i == 0:
      primo = 1
  if primo == 1:
    print(X,"nao eh primo")
  elif primo == 0:
    print(X,"eh primo")
