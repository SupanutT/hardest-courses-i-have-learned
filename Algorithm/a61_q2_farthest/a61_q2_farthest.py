N = int(input())
G = [ [] for i in range(N)]
for i in range(N):
    tmp = input().split()
    for j,w in enumerate(tmp):
        if w in ['0', '-1']: continue
        G[i].append((j,int(w)))

d = [float('INF')]*N
p = [-1]*N

def BellmanFord(G,S):
    d[S] = 0
    for i in range(N):
        for u in range(N):
            for (v,w) in G[u]:
                if (d[u] + w < d[v]):
                    d[v] = d[u] + w
                    p[v] = u

BellmanFord(G,0)
print(max(d))