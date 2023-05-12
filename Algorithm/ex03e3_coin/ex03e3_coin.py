_,m = [int(i) for i in input().strip().split()]
l = [int(i) for i in input().strip().split()]
s = [0] + [m]*m
for i in range(m+1):
    for j in l:
        if (i+j<=m):
            s[i+j] = min(s[i+j], s[i]+1)

print(s[m])
