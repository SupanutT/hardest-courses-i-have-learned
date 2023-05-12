r,c = [int(i) for i in input().split()]
l = [[str(i) for i in input()] for j in range(r)]
tmp = [[0 for i in range(c)] for j in range(r)]
for i in range(1,r):
    for j in range(1,c):
        tmp[i][j] = min(tmp[i-1][j-1],tmp[i-1][j],tmp[i][j-1])+1 if l[i][j] == "1" else 0
print(max(map(max,tmp)))
