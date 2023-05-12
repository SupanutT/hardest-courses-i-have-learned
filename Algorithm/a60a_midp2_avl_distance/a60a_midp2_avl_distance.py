import sys
input = sys.stdin.readline

n,k = [int(i) for i in input().split()]
d = dict()
for i in range(n-1):
    a,b = [int(i) for i in input().split()]
    if a not in d: d[a] = [b]
    else: d[a] += [b]
    if b not in d: d[b] = [a]
    else: d[b] += [a]
print(d)
    