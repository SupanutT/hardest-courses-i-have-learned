import sys
sys.setrecursionlimit(10000)
n,k = [int(i) for i in input().split()]
d = {}
def distance(n,k):
    if (n,k) in d: return d[n,k]
    if (n<=k):
        d[n,k] = n+1
        return n+1
    d[n,k] = (distance(n-k,k)+distance(n-1,k))%100000007
    return d[n,k]
print(distance(n,k))