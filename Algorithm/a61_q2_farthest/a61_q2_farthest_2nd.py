n = int(input())
G = [ [] for i in range(n)]
for i in range(n):
    tmp = input().split()
    for j,w in enumerate(tmp):
        if (w not in ['0','-1']): 
            G[i].append((j,int(w)))
#for i,j in enumerate(G):print(i,*j)

d = [float('INF')]*n
d[0] = 0
for i in range(n):
    for u in range(n):
        for v,w in G[u]:
            if (w + d[u] < d[v]):
                d[v] = w + d[u]
print(max(d))