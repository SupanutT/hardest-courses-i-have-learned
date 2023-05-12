import sys
sys.setrecursionlimit(10000)
def DFS(p,u):
    color[u] = 1
    for v in G[u]:
        if (p == v): continue
        if (color[v] == 0):
            DFS(u,v)
    color[u] = 2

v,e = [int(i) for i in input().split()]
G = [ [] for i in range(v)]
for i in range(e):
    a,b = [int(i)-1 for i in input().split()]
    G[a].append(b)
    G[b].append(a)
    
ans = 0
color = [0 for i in range(v)]
for u in range(v):
    if (color[u] == 0):
        DFS(-1,u)
        ans += 1
print(ans)