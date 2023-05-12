from collections import deque
n,e,k = [int(i) for i in input().split()]
G = [ [] for i in range(n+1)]
for i in range(e):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)
q = deque()
q.append(0)
q.append(None)
color = [0 for i in range(n+1)]

while (len(q) != 0) and (k > 0):
    u = q.popleft()
    if (u == None):
        k -= 1
        q.append(None)
        continue
    for v in G[u]:
        if (v > 0) and (color[v] == 0):
            q.append(v)
            color[v] = 1
print(len(q)-1)