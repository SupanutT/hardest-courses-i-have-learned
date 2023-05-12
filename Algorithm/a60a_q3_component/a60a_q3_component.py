def DFS(G):
    count = 0
    for i in range(v):
        if (color[i] == 0):
            DFSu(G,i)
            count += 1
    return count

def DFSu(G,u):
    color[u] = 1
    for i in G[u]:
        if (color[i] == 0):
            DFSu(G,i)
    color[u] = 2
    return

v,e = [int(i) for i in input().split()]
G = [ [] for i in range(v)]
for i in range(e):
    a,b = [int(i) for i in input().split()]
    a -= 1; b -= 1
    G[a].append(b)
    G[b].append(a)
color = [0 for i in range(v)] 
#print(DFS(G))

""" optimized memory version """
c = 0
for s in range(v):
    if (color[s] != 0): continue
    c += 1
    S = []
    S.append(s)
    while (len(S) != 0):
        u = S.pop()
        color[u] = 1
        for v in G[u]:
            if (color[v] == 0): S.append(v)
print(c)





