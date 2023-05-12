def DFS(G,p,u):
    global count
    color[u] = 1
    count += 1
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
        GT[v].append(i)
        G[i].append(v)
        
color = [0 for i in range(N)]
f = []
ans = []
count = 0
for u in range(N):
    if (color[u] == 0):
        DFS(GT,-1,u)

color = [0 for i in range(N)]

for u in f[::-1]:
    if (color[u] == 0):
        count = 0
        DFS(G,-1,u)
        ans.append(count)
        
print(*sorted(ans))
    