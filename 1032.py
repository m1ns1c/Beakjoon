n = int(input())
filenames = [input().rstrip() for i in range(n)]

pattern = list(filenames[0])

for name in filenames[1:]:
    for i, ch in enumerate(name):
        if pattern[i] != ch:
            pattern[i] = '?'

print(''.join(pattern))