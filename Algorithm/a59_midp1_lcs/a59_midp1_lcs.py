N, M, K = [int(a) for a in input().split()]
count = [[0]*(K+1) for i in range(N)]
count[0][0] = 1
for k in range(K):
    for n in range(N):
        for m in range(1,M+1):
            if n + m >= N:
                break
            count[n+m][k+1] += count[n][k]
#print(count)
#print(min(M+1,N+1))
print(sum([count[-i][K] for i in range(1,N+1)]))
