a, b = map(int, input().split())
c = int(input())

b += c
if b > 59:
    temp = b // 60
    b = b % 60
    a += temp
if a > 23:
    a -= 24
print(f"{a} {b}")