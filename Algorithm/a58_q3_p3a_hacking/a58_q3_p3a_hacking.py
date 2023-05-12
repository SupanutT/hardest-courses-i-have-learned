import heapq as h
n,m,k = [int(i) for i in input().split()]
S = [int(i) for i in input().split()]
times = [int(i) for i in input().split()]
G = [ [] for i in range(n)]
for i in range(m):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)
    
in_MST = [False]*n
pq = []
for u in S:
    pq.append((times[u],u))
    in_MST[u] = True
h.heapify(pq)
print(pq)
while (len(pq) != 0):
    t,u = h.heappop(pq)
    print(t,u)
    for v in G[u]:
        if not in_MST[v]:
            h.heappush(pq, (times[v]+t,v))
            in_MST[v] = True
print(t)

""" BellmanFord - too slow 
d = [float('INF')]*n
p = [-1]*n
for u in S:
    d[u] = times[u]
def BellmanFord(G):
    for i in range(n):
        for u in range(n):
            for v in G[u]:
                if (d[u]+times[v] < d[v]):
                    d[v] = d[u] + times[v]
                    p[v] = u
BellmanFord(G)
print(max(d))
"""
