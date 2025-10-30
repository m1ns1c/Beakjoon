n = input()
a = []
b = []
add = 0
for i in range(len(n)-1,-1,-1):
    a.append(n[i])
for j in n:
    b.append(j)
if(a == b):
    print(1)
else:
    print(0)