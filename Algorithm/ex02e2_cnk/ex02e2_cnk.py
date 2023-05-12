n,k = [int(i) for i in input().split()]
d = dict()
def binomial(n,k):
    if (n==k) or (k==0): return 1
    if (n,k) not in d:
        d[(n,k)] = binomial(n-1,k-1) + binomial(n-1,k)
    else: return d[(n,k)]
    return d[(n,k)]
print(binomial(n,k))