from collections import deque

R,C = [int(i) for i in input().split()]
m = []

for i in range(R):
    m.append(list(str(input().strip())))
q = deque()
q.append((0,0))

moves = [(0,1),(0,-1),(1,0),(-1,0)]
step = [[-1]*C for i in range(R)]
step[0][0] = 0

while (step[-1][-1] == -1) and (len(q) > 0):
    u = q.popleft()
    for move in moves:
        ur = u[0] + move[0]
        uc = u[1] + move[1]
        if (ur >= 0) and (uc >= 0) and \
           (uc < C) and (ur < R) and \
           (m[ur][uc] == '.') and (step[ur][uc] == -1):
            step[ur][uc] = step[u[0]][u[1]] + 1
            q.append((ur,uc))
print(step[-1][-1])

