import sys,bisect
input = sys.stdin.readline

n,k,m = [int(i) for i in input().split()]
l = [int(i)-m for i in input().split()]
l = [0]+l
for i in range(1,len(l)):l[i]+=l[i-1]
for i in range(k):
    start,cost = [int(i) for i in input().split()]
    print(bisect.bisect_left(l,cost+l[start-1]))
