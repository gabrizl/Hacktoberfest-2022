# To Print the Pascal's Triangle in Python
from math import factorial

# input number
num = 5
for i in range(num):
    for j in range(num-i+1):
 
        # for left spacing
        print(end=" ")
 
    for j in range(i+1):
 
        # formula as we know nCr = n!/((n-r)!*r!)
        print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")
 
    # for new line
    print()
    
