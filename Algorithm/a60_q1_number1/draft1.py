import sys
input = sys.stdin.readline

ans = 0
def recurr(n,l,r,currL,currR):
    global ans
    if (currL > r or currR < l or n==0): return
    if (n==1):
        ans+=1
        return
    mid = (currL+currR)/2
    recurr(n//2,l,r,currL,mid-1)
    recurr(n%2,l,r,mid,mid)
    recurr(n//2,l,r,mid+1,currR)        
    
    return

n,l,r = [int(i) for i in input().split()]
maxR = 1
tmp = n
while (tmp>1):
    maxR = 2*maxR+1
    tmp //= 2
recurr(n,l,r,1,maxR)
print(ans)
