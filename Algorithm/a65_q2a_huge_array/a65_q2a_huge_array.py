import bisect,sys
input = sys.stdin.readline
n,q=[int(i) for i in input().split()]
d={}
for i in range(n):
    x,c = [int(i) for i in input().split()]
    if x not in d:d[x] = c
    else:d[x]+=c
l = sorted(d)
value = [d[i] for i in l]
for i in range(1,len(value)): value[i] += value[i-1]
for i in range(q):
    val = int(input())
    print(l[bisect.bisect_left(value,val)])