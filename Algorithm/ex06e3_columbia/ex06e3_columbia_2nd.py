import heapq as h
R,C = [int(i) for i in input().split()]
m = []
for i in range(R):
    tmp = [int(i) for i in input().split()]
    m.append(tmp)
ans = [ [float('INF')]*C for i in range(R)]
ans[0][0] = 0

moves = [(1,0),(-1,0),(0,1),(0,-1)]
pq = [(0,0,0)]
while (len(pq) != 0):
    w,r,c = h.heappop(pq)
    for move in moves:
        ur = r + move[0]
        uc = c + move[1]
        if (ur >= 0) and (uc >= 0) and \
           (ur < R) and (uc < C) and \
           (ans[r][c] + m[ur][uc] < ans[ur][uc]):
            ans[ur][uc] = ans[r][c] + m[ur][uc]
            h.heappush(pq,(ans[ur][uc],ur,uc))
for i in ans:print(*i)