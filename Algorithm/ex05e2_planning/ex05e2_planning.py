def DFS(G,p,u):
    color[u] = 1
    for v in G[u]:
        if (p == v): continue
        if (color[v] == 0):
            DFS(G,u,v)
    color[u] = 2
    f.append(u)

N = int(input())
G = [ [] for i in range(N)]
GT = [ [] for i in range(N)]
for i in range(N):
    tmp = [int(i) for i in input().split()][1:]
    for v in tmp:
        GT[i].append(v)

color = [0 for i in range(N)]
f = []

for i in range(N):
    if (color[i] == 0):
        DFS(GT,-1,i)

print(*f)
