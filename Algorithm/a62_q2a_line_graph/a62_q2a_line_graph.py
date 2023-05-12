def is_linear(p,u):
    color[u] = 1
    if (len(G[u]) > 2): return False
    if (len(G[u]) in [0,1]) and (p != -1): return True
    
    state = True
    for v in G[u]:
        if (p == v): continue
        if (color[v] != None): return False
        state = state and is_linear(u,v)
        
    return state

v,e = [int(i) for i in input().split()]
G = [ [] for i in range(v)]
for i in range(e):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)
    
color = [None for i in range(v)]
c = 0

for i in range(v):
    if (color[i] != None): continue
    if (is_linear(-1,i)): c += 1
print(c)

        