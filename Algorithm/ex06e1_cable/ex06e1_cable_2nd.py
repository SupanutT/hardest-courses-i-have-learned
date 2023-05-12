N = int(input())
m = [[float('INF')]*N for i in range(N)]
for i in range(N-1):
    tmp = [int(i) for i in input().split()]
    for j,w in enumerate(tmp):
        m[i][i+j+1] = w
        m[i+j+1][i] = w

d = [0]+[float('INF')]*(N-1)
p = [0]+[-1]*(N-1)
in_MST = [False]*N

for i in range(N):
    u = d.index(min(d))
    d[u] = float('INF')
    in_MST[u] = True
    for v in range(N):
        if (not in_MST[v]) and (m[u][v] < d[v]):
            d[v] = m[u][v]
            p[v] = u
ans = 0
for u in range(1,N):
    ans += m[u][p[u]]
print(ans)