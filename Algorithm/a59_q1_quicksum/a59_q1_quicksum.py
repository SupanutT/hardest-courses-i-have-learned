import sys
input = sys.stdin.readline
n,m,k = [int(i) for i in input().strip().split()]
A = [[int(i) for i in input().strip().split()] for j in range(n)]
K = [[int(i) for i in input().strip().split()] for j in range(k)]
P = [[A[0][0]]]
P[0][0] = A[0][0]
for j in range(1,m): P[0].append(P[0][j-1] + A[0][j])
for i in range(1,n):
    P.append([0])
    P[i][0] = P[i-1][0] + A[i][0]
    for j in range(1,m): P[i].append(P[i-1][j] + P[i][j-1] - P[i-1][j-1] + A[i][j])
for i,k in enumerate(K):
    r1,c1,r2,c2 = k
    if (r1==r2) and (c1==c2): print(A[r1][c1])
    elif (r1==0) and (c1==0): print(P[r2][c2])
    elif (r1==0): print(P[r2][c2]-P[r2][c1-1])
    elif (c1==0): print(P[r2][c2]-P[r1-1][c2])
    else: print(P[r2][c2]-P[r1-1][c2]-P[r2][c1-1]+P[r1-1][c1-1])