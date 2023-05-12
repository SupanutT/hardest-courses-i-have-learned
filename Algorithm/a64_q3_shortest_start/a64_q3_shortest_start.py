import sys
input = sys.stdin.readline

n,m,k = [int(i) for i in input().split()]
goal = int(input())
start = [int(i) for i in input().split()]
edges = []

for i in range(m):
    a, b, w = [int(i) for i in input().split()]
    edges.append((b, a, w))

d = [float('INF')]*n
d[goal] = 0

for i in range(n):
    changed = False
    for e in edges:
        u,v,w = e
        if d[u]+w < d[v]:
            d[v] = d[u]+w
            changed = True
    if not changed:break

ans = float('INF')
for u in start:
    ans = min(ans, d[u])

print(ans)
