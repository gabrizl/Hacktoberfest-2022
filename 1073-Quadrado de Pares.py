n = int(input())
for i in range(1,n+1):
  if i %2 == 0:
    pot = i**2
    print('{}^2 = {}'.format(i,pot))
