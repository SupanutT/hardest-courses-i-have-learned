import sys
input = sys.stdin.readline
n = int(input())
l = [int(i) for i in input().split()]
tmp = [0]*(n-1)+[1]
ans = 0
for i in range(n-2,-1,-1):
    minList = []
    for j in range(i,n):
        if (l[i]>l[j]): continue
        minList.append(tmp[j])
    tmp[i] = 1 if minList==[] else 1+max(minList)
print(max(tmp))