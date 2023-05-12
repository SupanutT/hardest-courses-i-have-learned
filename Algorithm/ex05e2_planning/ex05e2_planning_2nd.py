def DFS(G,p,u):
    color[u] = 1
    for v in G[u]:
        if (p == v): continue
        if (color[v] == 0):
            DFS(G,u,v)
    color[u] = 2
    f.append(u)

N = int(input())
GT = [ [] for i in range(N)]
for i in range(N):
    tmp = [int(i) for i in input().split()]
    for u in tmp[1:]:
        GT[i].append(u)
f = []
color = [0 for i in range(N)]
for u in range(N):
    if (color[u] == 0):
        DFS(GT,-1,u)
print(*f)