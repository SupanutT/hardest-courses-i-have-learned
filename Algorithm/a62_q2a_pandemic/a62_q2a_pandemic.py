from collections import deque
r,c,T = [int(i) for i in input().split()]
m = []
q = deque()
count = 0
moves = [(0,1),(0,-1),(1,0),(-1,0)]
for i in range(r):
    m.append([int(i) for i in input().split()])
    for j in range(len(m[-1])):
        if (m[i][j] == 1):
            q.append((i,j))
            count += 1
q.append(None)
while (len(q) != 0) and (T > 0):
    u = q.popleft()
    if (u == None): T -= 1; q.append(None); continue
    for move in moves:
        ur = u[0] + move[0]
        uc = u[1] + move[1]
        if (ur >= 0) and (uc >= 0) and \
           (ur < r) and (uc < c) and \
           (m[ur][uc] not in [1,2]):
            m[ur][uc] = 1
            count += 1
            q.append((ur,uc))
    
print(count)
        