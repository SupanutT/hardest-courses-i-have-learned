from collections import deque

N,E,K = [int(i) for i in input().split()]
G = [ [] for i in range(N)]
for i in range(E):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)
  
def BFS(S,K):
    q = deque()
    q.append(S)
    q.append(None)
    color = [0 for i in range(N)]
    color[S] = 1

    while (len(q) != 0) and (K > 0):
        u = q.popleft()
        if (u == None):
            K -= 1
            q.append(None)
            continue
        for v in G[u]:
            if (color[v] == 0):
                q.append(v)
                color[v] = 1
    return sum(color)
ans = []
for u in range(N):
    ans.append(BFS(u,K))
print(max(ans))