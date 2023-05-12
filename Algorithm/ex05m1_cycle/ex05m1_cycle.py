def check_cyclic(p,u):
    global color
    color[u] = 1
    for v in G[u]:
        if (v == p): continue # check-recalculate with previous vertex due to undirected graph
        if (color[v] == 1): return True
        if (color[v] == 0) and (check_cyclic(u,v)): return True
    color[u] = 2
    return False

def is_cyclic():
    for i in range(N):
        if (color[i] == 0):
            if (check_cyclic(-1,i)): return True
    return False        

T = int(input())
for i in range(T):
    N,E = [int(i) for i in input().split()]
    G = [ [] for i in range(N)]
    for e in range(E):
        a,b = [int(j) for j in input().split()]
        G[a].append(b)
        G[b].append(a)
    print("G", G)
    if (E <= 2): print("NO"); continue
    color = [0 for j in range(N)]
    print("YES" if is_cyclic() else "NO")
    
"""
1
4 4
2 3
0 1
1 2
2 0
"""