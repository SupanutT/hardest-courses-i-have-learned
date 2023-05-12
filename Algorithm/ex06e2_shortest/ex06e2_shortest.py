N,E,S = [int(i) for i in input().split()]
G = [ [] for i in range(N)]
for i in range(E):
    a,b,w = [int(i) for i in input().split()]
    G[a].append((b,w))
    
d = [float('INF')]*N
p = [-1]*N

def BellmanFord(G, s):
    d[s] = 0
    for i in range(N):
        for u in range(N):
            for (v,w) in G[u]:
                if (d[u]+w < d[v]):
                    d[v] = d[u]+w
                    p[v] = u
    for u in range(N):
        for (v,w) in G[u]:
            if (d[u]+w < d[v]): return [-1]
    return d
d = BellmanFord(G,S)
print(*d)
