import sys
input = sys.stdin.readline

n,m = [int(i) for i in input().split()]
l = [[int(i) for i in input().split()] for j in range(n)]
for i in range(1,m): l[0][i] += l[0][i-1]
for i in range(1,n): l[i][0] += l[i-1][0]
#print(l)
for i in range(1,n):
    for j in range(1,m):
        if i==n-1 and j==m-1: break
        #print(i,j)
        if (l[i][j]>max(l[i-1][j],l[i][j-1])):
            l[i][j] += l[i][j]+l[i-1][j-1]
        else: l[i][j] += max(l[i-1][j],l[i][j-1])
if len(l[0])>1 and len(l)>1: print(l[-1][-1]+max(l[-1][-1]+l[-2][-2],l[-2][-1],l[-1][-2]))
else: print(max(map(max,l)))
print(l[-2])