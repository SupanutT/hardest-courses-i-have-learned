def cyclic(p,u):
    global ans
    for v in G[u]:
        if (p == v): continue
        if (color[v] != 0):
            ans = max(ans,color[u]-color[v]+1)
            return 
        if (color[v] == 0):
            color[v] = color[u] + 1
            cyclic(u,v)
    return


n = int(input())
G = [ [] for i in range(n)]
for i in range(n):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)

color = [1] + [0 for i in range(n-1)]
ans = 0

cyclic(-1,0)
print(ans)