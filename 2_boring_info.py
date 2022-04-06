n = int(input())
a=1
b=1
for i in range(n-2):
    tmp = a+b
    a=b
    b=tmp
print(b)
