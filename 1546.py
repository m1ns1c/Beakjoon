n = int(input())
a = list(map(float, input().split()))
m = max(a)
result = 0
for i in a:
    result += i / m * 100
print(f"{result / n}")