import sys
input = sys.stdin.readline

n = int(input())
l = [int(input()) for j in range(n)]
tmp = l
m = max(l)
d = {1:1,2:3,3:5,4:0}
key = 3
curr = 5
j = 0
ans = dict((i,0) for i in l)
l = sorted(l)
for i in range(4,m):
    if (j>n-1): break
    if (i<=curr):
        d[i] = d[i-1]+key
    else:
        key += 1
        d[i] = d[i-1]+key
        curr = d[key]
    while (j < n and l[j]<=d[i]):
        ans[l[j]] = i
        j+=1
for i in tmp:
    print(ans[i])
        
        
