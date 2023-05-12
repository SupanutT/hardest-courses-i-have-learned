import heapq as h
N,E,S = [int(i) for i in input().split()]
G = [ [] for i in range(N)]
for i in range(E):
    a,b,w = [int(i) for i in input().split()]
    G[a].append((b,w))

d = [float('INF')]*N

def BellmanFord():
    d[S] = 0
    for i in range(N):
        for u in range(N):
            for v,w in G[u]:
                if (d[u]+w < d[v]):
                    d[v] = d[u]+w
    for u in range(N):
        for v,w in G[u]:
            if (d[u]+w < d[v]):
                return [-1]
    return d

d = BellmanFord()
print(*d)
    


