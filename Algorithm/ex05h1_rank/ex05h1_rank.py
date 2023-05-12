def is_DAG(p,u):
    color[u] = 1
    for v in G[u]:
        if (p == v): continue
        if (color[v] == 1): return False
        if (color[v] == 0) and (is_DAG(u,v)): return False
    color[u] = 2
    return True

N,P = [int(i) for i in input().split()]
G = [ [] for i in range(N)]
for i in range(P):
    a,b = [int(i) for i in input().split()]
    G[b].append(a)
color = [0 for i in range(N)]
same_rank = 0
for i in range(N):
    if (color[i] == 0): print(i, is_DAG(-1,i))

