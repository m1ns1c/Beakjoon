n = input()
a = []
for i in n:
    if i.islower() == True:
        a.append(i.upper())
    else:
        a.append(i.lower())
for j in a:
    print(j,end="")