n = int(input())

su = 0

def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

for i in range(1,n):
    for j in range(i+1,n+1):
        su += gcd(i,j)

print(su)
