tmp = [int("1"*i) for i in range(1,11)]
def r(n):
    n = abs(n)
    if n==0: return 0
    mod = [i for i in tmp if i<=n][-1]
    m = (n//mod)*len(str(mod))+r(n-mod*(n//mod))
    if int(str(mod)+"1") < 2*n:
        m = min(m,len(str(mod))+1+r(int(str(mod)+"1")-n))
    return m
print(r(int(input())))