n = int(input())
bt = []
for i in range(n):
    bt.append(int(input()))

d = [0]+[float('-INF')]*(n-1)
p = [0]+[-1]*(n-1)
in_MST = [False]*n

for i in range(n):
    u = d.index(max(d))
    d[u] = float('-INF')
    in_MST[u] = True
    for v in range(n):
        if (not in_MST[v]) and (bt[u]^bt[v] > d[v]):
            d[v] = bt[u]^bt[v]
            p[v] = u
ans = 0
for u in range(1,n):
    ans += bt[u]^bt[p[u]]
print(ans)