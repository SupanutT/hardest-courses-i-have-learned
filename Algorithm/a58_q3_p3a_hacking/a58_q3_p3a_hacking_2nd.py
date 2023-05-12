from collections import deque
n,m,k = [int(i) for i in input().split()]
ss = [int(i) for i in input().split()]
times = [int(i) for i in input().split()]
G = [ [] for i in range(n)]
for i in range(m):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)

d = [float('INF')]*n
p = [-1]*n
q = deque()
for s in ss:
    d[s] = times[s]
    q.append(s)

while (len(q) != 0):
    u = q.popleft()
    for v in G[u]:
        if (d[u]+times[v] < d[v]):
            d[v] = d[u]+times[v]
            q.append(v)
print(max(d))
