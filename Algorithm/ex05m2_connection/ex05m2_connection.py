from collections import deque
n,e,k = [int(i) for i in input().split()]
G = [[] for i in range(n)]
ans = 0

def BFS(G,s,lv):
    curr_lv = 0
    visited = [False]*len(G)
    visited[s] = True
    q = deque()
    q.append(s)
    q.append(None)
    while (len(q) != 0) and (curr_lv < lv):
        u = q.popleft()
        if (u == None):
            curr_lv += 1
            q.append(None)
            continue
        for v in G[u]:
            if not visited[v]:
                q.append(v)
                visited[v] = True
    return sum(visited)

for i in range(e):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)

con = [0]*len(G)
for u in range(len(G)):
    con[u] = BFS(G,u,k)
print(max(con))
