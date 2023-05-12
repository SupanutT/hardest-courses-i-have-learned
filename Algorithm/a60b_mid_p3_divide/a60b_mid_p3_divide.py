d=dict()
def r(n,k):
    if k==1 or k==n: return 1
    if (n,k) in d: return d[(n,k)]
    d[(n,k)]=(k*(r(n-1,k))+r(n-1,k-1))%1997
    return d[(n,k)]
print(r(*map(int,input().split())))