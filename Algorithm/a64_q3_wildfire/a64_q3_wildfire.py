import sys
input = sys.stdin.readline
sys.setrecursionlimit(10000)

def DFS(u):
    global damage
    color[u] = 1
    damage += score[u]
    for v in G[u]:
        if (color[v] == 0):
            DFS(v)
    color[u] = 2

n,m,k = [int(i) for i in input().split()]
score = [int(i) for i in input().split()]
day = [int(i) for i in input().split()]
G = [ [] for i in range(n)]
for i in range(m):
    a,b = [int(i) for i in input().split()]
    G[a].append(b)

ans = []
total = sum(score)
damage = 0
color = [0 for i in range(n)]
for u in day:
    if (color[u] == 0):
        DFS(u)
    ans.append(total-damage)
print(*ans)