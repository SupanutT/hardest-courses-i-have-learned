def DFS(p,u):
    color[u] = 1
    if (len(G[u]) == 0): return True
    if (len(G[u]) > 2): return False
    for v in G[u]:
        if (p == v): continue
        if (color[v] == 1): return False
        else: return DFS(u,v)
    return True

v,e = [int(i) for i in input().split()]
G = [ [] for i in range(v)]

for i in range(e):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)
    
color = [0 for i in range(v)]
ans = 0
for u in range(v):
    ans += DFS(-1,u)
print(ans)