import heapq as h #pq
R,C = [int(i) for i in input().split()]
m = [ [] for i in range(R)]
for i in range(R):
    tmp = [int(i) for i in input().split()]
    m[i] = tmp

moves = [(-1,0),(1,0),(0,1),(0,-1)]
pq = [(0,0,0)]
d = [ [float('INF')]*C for i in range(R)]
d[0][0] = 0

while (len(pq) != 0):
    w,r,c = h.heappop(pq)
    if (w > d[r][c]): continue
    for move in moves:
        ur = r + move[0]
        uc = c + move[1]
        if (ur >= 0) and (uc >= 0) and \
           (ur < R) and (uc < C) and \
           (d[r][c]+m[ur][uc] < d[ur][uc]):
            d[ur][uc] = d[r][c] + m[ur][uc]
            h.heappush(pq, (d[ur][uc],ur,uc))

for i in d: print(*i)