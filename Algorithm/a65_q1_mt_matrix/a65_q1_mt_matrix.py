import sys
input = sys.stdin.readline

def MT(r,c,nn):
    if (nn == 2):
        return l[2*r+c-3]
    
    mid = nn//2
    if (r<=mid):
        if (c<=mid):
            return MT(r,c,mid)
        else:
            return MT(c-mid,r,mid)
    else:
        if (c<=mid):
            return -1*MT(r-mid,c,mid)
        else:
            return -1*MT(c-mid,r-mid,mid)
        

n,m = [int(i) for i in input().strip().split()]

l = [int(i) for i in input().strip().split()]
# u, v, w, p

for i in range(m):
    r,c = [int(i) for i in input().strip().split()]
    print(MT(r,c,2**n))

