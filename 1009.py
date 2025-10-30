n = int(input())
for i in range(n):          
    a, b = map(int, input().split())
    last = pow(a, b, 10)           
    print(last if last != 0 else 10)