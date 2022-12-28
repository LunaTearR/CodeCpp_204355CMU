def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

input_string = input()
list_ = list(map(int,input_string.split()))

max_ = 0
for i in range(len(list_)):
    for j in range(i):
        max_ = max(max_,gcd(list_[i],list_[j]))

print(max_)