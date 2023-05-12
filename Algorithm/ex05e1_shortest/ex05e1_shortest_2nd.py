from collections import deque
R,C = [int(i) for i in input().split()]
m = []
for i in range(R):
    tmp = " ".join(input()).strip().split()
    m.append(tmp)

q = deque()
q.append((0,0))
m[0][0] = 0
moves = [(0,1),(0,-1),(1,0),(-1,0)]

while (len(q) != 0):
    u = q.popleft()
    for move in moves:
        ur = u[0] + move[0]
        uc = u[1] + move[1]
        if (ur >= 0) and (uc >= 0) and \
           (ur < R) and (uc < C) and \
           (m[ur][uc] == '.'):
            m[ur][uc] = m[u[0]][u[1]] + 1
            q.append((ur,uc))
print(m[-1][-1] if m[-1][-1] != '.' else -1)
    