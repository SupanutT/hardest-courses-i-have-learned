from collections import deque

def is_end(ur,uc):
    return True if ((ur in [0,999,1000]) or (uc in [0,999])) else False


N,a,b = [int(i) for i in input().split()]
a-=1;b-=1;r=1000;c=1000
m = [ [0]*c for i in range(r)]
moves = [(0,1),(0,-1),(1,0),(-1,0)]
q = deque()
q.append((a,b))
q.append(None)
for i in range(N):
    x,y = [int(i)-1 for i in input().split()]
    m[x][y] = -1
ans = 0
found = False
while (len(q) != 0):
    u = q.popleft()
    tmp = deque()
    if (u == None):
        q.append(None)
        ans += 1
        continue
    for move in moves:
        ur = u[0] + move[0]
        uc = u[1] + move[1]
        if (m[ur][uc] == -1):
            q.append((ur,uc))
            m[ur][uc] = 1
        if (m[ur][uc] == 0):
            tmp.append((ur,uc))
            m[ur][uc] = 1
    while (len(tmp) != 0):
        v = tmp.popleft()
        for move in moves:
            vr = v[0] + move[0]
            vc = v[1] + move[1]
            if (vr < 0) or (vc < 0) or \
               (vr >= 1000) or (vc >= 1000): found = True
            elif (m[vr][vc] == -1):
                q.append((vr,vc))
                m[vr][vc] = 1
            elif (m[vr][vc] == 0):
                tmp.append((vr,vc))
                m[vr][vc] = 1
            found = found or is_end(vr,vc)
            if found: break
    if found: break
print(ans)
            
            
