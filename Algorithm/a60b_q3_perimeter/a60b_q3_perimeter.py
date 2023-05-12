from collections import deque

n,e,k = [int(i) for i in input().split()]
G = [ [] for i in range(n+1)]
for i in range(e):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)

count = 0
q = deque()
q.append(0)
q.append(None)
color = [0 for i in range(n+1)]
while (len(q) != 0) and (k > 0):
    u = q.popleft()
    if (u == None):
        q.append(None)
        k -= 1
        continue
    for v in G[u]:
        if (v == 0) or color[v] == 1: continue
        color[v] = 1
        q.append(v)
    
print(len(set(q))-1)
