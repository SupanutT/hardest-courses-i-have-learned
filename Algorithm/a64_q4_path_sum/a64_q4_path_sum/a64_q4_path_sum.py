import sys
input = sys.stdin.readline
n,m = [int(i) for i in input().split()]
k = [int(i) for i in input().split()]
G = [[] for i in range(n)]

possible_max = -float('inf')

for i in range(m):
    a,b,w = [int(i) for i in input().split()]
    G[a].append((b,w))
    G[b].append((a,w))
    possible_max = max(w,possible_max)

color = [0]*n
used = [False]*n

def DFS(color,p,u,total,aim):
    global found
    if (found): return
    for v,w in G[u]:
        if (found): return
        if (p == v): continue
        if (total+w > aim): continue
        if (total+w == aim and color[v] == 0): found = True; return
        if (color[v] == 0): DFS(color,u,v,total+w,aim)
    color[u] = 0
        
for aim in k:
    found = False
    for i in range(n):
        color = [0]*n
        if (found): break
        if (not found):
            color[i] = 1
            DFS(color,-1,i,0,aim)
            color[i] = 0
    print("YES" if found else "NO")