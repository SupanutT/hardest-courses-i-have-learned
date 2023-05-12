n=int(input());l=[[*map(int,input().split())]for i in range(n)]
for r in range(1,n):l[r][1:]=max(l[r-1][:-1]+l[r][1:],l[r][1:])
print(max(map(max,l)))
print(l)

