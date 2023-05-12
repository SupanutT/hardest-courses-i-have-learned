from collections import deque
r,c,T = [int(i) for i in input().split()]
q = deque()
m = []
ans = 0
for i in range(r):
    tmp = [int(i) for i in input().split()]
    for j,w in enumerate(tmp):
        if (w == 1): q.append((i,j)); ans += 1
    m.append(tmp)
q.append(None)
moves = [(0,1),(0,-1),(1,0),(-1,0)]

while (len(q) != 0) and (T > 0):
    u = q.popleft()
    if (u == None):
        T -= 1
        q.append(None)
        continue
    for move in moves:
        ur = u[0] + move[0]
        uc = u[1] + move[1]
        if (ur >= 0) and (uc >= 0) and \
           (ur < r) and (uc < c) and \
           (m[ur][uc] == 0):
            m[ur][uc] = 1
            q.append((ur,uc))
            ans += 1
print(ans)

