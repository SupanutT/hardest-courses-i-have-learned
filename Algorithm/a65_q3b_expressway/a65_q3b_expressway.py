import sys
input = sys.stdin.readline

n,start = [int(i) for i in input().split()]
c = [[float('inf')]*n for i in range(n)]
c[0][1] = start
ans = []
for i in range(n-2):
    tmp = [int(i) for i in input().split()]
    city_index = 0
    for j,w in enumerate(tmp[1:]):
        if (j%2==0): 
            city_index = w-1
        else:
            c[city_index][i+2] = w
            c[i+2][city_index] = w
    in_MST = [False]*n
    d = [float('inf')]*n
    d[0] = 0
    min_dist = [float('inf')]*n
    for j in range(i+3):
        u = d.index(min(d))
        min_dist[u] = d[u]
        if (u == 1): break
        d[u] = float('inf')
        in_MST[u] = True
        for v in range(i+3):
            if (not in_MST[v]) and (min_dist[u] + c[u][v] < d[v]):
                d[v] = min_dist[u] + c[u][v]
    ans.append(min_dist[1])
print(*ans)