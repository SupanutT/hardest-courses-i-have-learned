import sys
input = sys.stdin.readline

def DFS(m,u,w,up):
    global ans
    
    if (m == n-1):
        w += G[u][n-1]
        ans = max(ans,w)
        return

    if (w+up <= ans):
        return
    
    for v in range(n-1):
        if (color[v] == 1): continue
        color[v] = 1
        DFS(m+1,v,w+G[u][v],up-maxG[u])
        color[v] = 0

n = int(input())
G = [[] for i in range(n)]
color = [1] + [0]*(n-1)
ans = -float('inf')
m = -float('inf')
maxG = []

for i in range(n):
    G[i] += [int(i) for i in input().split()]
    m = max(m, max(G[i]))
    maxG.append(m)

DFS(1,0,0,sum(maxG[:-1]))
print(ans)
