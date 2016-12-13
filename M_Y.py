import numpy as np
import random as rand
import sys
m = int(input("Input numeric of cols:"))
R=10

if m > R:
    print("Число не входить в заданий діапазон")
    sys.exit()
else:
    n = int(input("Input numeric of rows:"))
if n > R:
    print("Програма не може створити таку матрицю")
    sys.exit()
else:
    Y = np.zeros([m, n])
    A = []

s=1;
strt=1;
fin=100;
k=0;
summ=0;
for i in range(m):
    for j in range(n):
        Y[i,j]=rand.randint(strt,fin)

print("Array before addition: \n")
for i in range(m):
    print(*[Y[i,j] for j in range(n)])
print("\n")
rang_s = 35
rang_fin = 83
print("Summm after additional: \n ")
for i in range(m):
    if Y[i,i] > rang_s and Y[i,i] < rang_fin:
        s = s * Y[i,i]
print(s," ")

for i in range(m):
    for j in range(0,n,2):

        summ = summ + Y[i,j]
        if s < summ :
            A.append(Y)
        print(A," ")
