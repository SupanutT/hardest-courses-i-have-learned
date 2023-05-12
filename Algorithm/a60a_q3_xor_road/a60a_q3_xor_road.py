n = int(input())
id = []
for i in range(n):
    id.append(int(input()))
d = [0]+[-1]*(n-1)
p = [0]+[-1]*(n-1)
in_MST = [False]*n

for i in range(n):
    u = d.index(max(d))
    d[u] = -1
    in_MST[u] = True
    for v in range(n):
        if (not in_MST[v]) and (id[u]^id[v] > d[v]):
            d[v] = id[u]^id[v]
            p[v] = u
ans = 0
for i,v in enumerate(p[1:]):
    ans += id[i+1]^id[v]
print(ans)