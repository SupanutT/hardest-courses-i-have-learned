def tournament(k):
    n = 2**k
    dp = [[0 for i in range((n//(2**j))+1)] for j in range(k+1)]
    for i in range(1, n//2+1):
        dp[1][i] = 4
    for i in range(2, k+1):
        for j in range(1, n//(2**i)+1):
            dp[i][j] = dp[i-1][2*j-1] * dp[i-1][2*j]*2
    print(dp)
    return dp[k][1]

print(tournament(4))
