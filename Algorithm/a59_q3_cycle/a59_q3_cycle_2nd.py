import sys
input = sys.stdin.readline
def DFS(p,u):
    global ans
    color[u] = color[p]+1
    for v in G[u]:
        if (p == v): continue
        if (color[v] != 0):
            ans = abs(color[v]-color[u])+1   
        if (color[v] == 0):
            DFS(u,v)
    
n = int(input())
G = [ [] for i in range(n)]
for i in range(n):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)
    G[b].append(a)

color = [1]+[0 for i in range(n-1)]
ans = 0
DFS(-1,0)
        
print(ans)