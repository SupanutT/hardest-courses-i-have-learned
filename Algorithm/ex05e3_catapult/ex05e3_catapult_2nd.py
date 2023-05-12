def DFS(G,p,u):
    global count
    color[u] = 1
    count += 1
    for v in G[u]:
        if (p == v): continue
        if (color[v] == 0):
            DFS(G,u,v)
    f.append(u)

N = int(input())
G = [ [] for i in range(N)]
GT = [ [] for i in range(N)]
for i in range(N):
    tmp = [int(i) for i in input().split()]
    for u in tmp[1:]:
        G[i].append(u)
        GT[u].append(i)
f = []
count = 0
color = [0 for i in range(N)]
for u in range(N):
    if (color[u] == 0):
        DFS(GT,-1,u)
ans = []
color = [0 for i in range(N)]
for u in f[::-1]:
    if (color[u] == 0):
        count = 0
        DFS(G,-1,u)
        ans.append(count)
print(*sorted(ans))
