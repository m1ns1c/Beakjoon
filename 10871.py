n, m = map(int, input().split())
a = list(map(int, input().split()))
for i in a:
    if i < m:
        print(i, end=" ")
