import math

def turret(a, b, c, d, e, f):
    t = math.sqrt((d - a) ** 2 + (e - b) ** 2)
    if t == 0 and c == f:
        return -1
    if t > c + f or t < abs(c - f):
        return 0
    if t == c + f or t == abs(c - f):
        return 1
    return 2

n = int(input()) 
for i in range(n):
    a, b, c, d, e, f = map(int, input().split())
    print(turret(a, b, c, d, e, f))
