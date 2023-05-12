import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
t1,t2,t3 = [int(i)-1 for i in input().split()]

G = [ [] for i in range(n)]
for i in range(n):
    tmp = [int(i)-1 for i in input().split()]
    G[i] = tmp[1:]
    
color = [[0 for i in range(n)] for j in range(3)]
ans = 0

q = deque()
q.append((0,t1))
q.append((1,t2))
q.append((2,t3))
q.append(None)
done = False

while (len(q) != 0) and (not done):
    u = q.popleft()
    if (u == None):
        ans += 1
        q.append(None)
        continue
    color[u[0]][u[1]] += 1
    if (color[0][u[1]] == color[1][u[1]]) and (color[1][u[1]] == color[2][u[1]]) and\
       (color[0][u[1]] == 1):
        break
    for v in G[u[1]]:
        if (color[u[0]][v] == 0):
            q.append((u[0],v))
        
print(ans)