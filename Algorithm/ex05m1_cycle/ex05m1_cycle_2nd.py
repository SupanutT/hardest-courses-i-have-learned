def is_cycle(p,u):
    color[u] = 1
    for v in G[u]:
        if (p == v): continue
        if (color[v] != 0): return True
        if (color[v] == 0) and is_cycle(u,v):
            return True
    color[u] = 2
    return False

T = int(input())
for i in range(T):
    N,E = [int(i) for i in input().split()]
    G = [ [] for i in range(N)]
    color = [0 for i in range(N)]
    for i in range(E):
        a,b = [int(i) for i in input().split()]
        G[a].append(b)
        G[b].append(a)
    cycle = False
    for u in range(N):
        if (color[u] == 0):
            cycle = is_cycle(-1,u) or cycle
    print("YES" if cycle else "NO")
    
        