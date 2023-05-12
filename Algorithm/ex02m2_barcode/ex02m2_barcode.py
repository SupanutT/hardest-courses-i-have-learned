import sys
input = sys.stdin.readline

sum = 0
def barcode(n,m,k,lv,l,s,c):
    global sum
    if (lv==n):
        if (s==k and c<=m):
            #print(l)
            sum+=1
        return
    prev = lv-1
    l[lv] = 0
    if (l[prev] == 0) and (c<m): barcode(n,m,k,lv+1,l,s,c+1)  
    elif (s<k): barcode(n,m,k,lv+1,l,s+1,1)
    l[lv] = 1
    if (l[prev] == 1) and (c<m): barcode(n,m,k,lv+1,l,s,c+1)  
    elif (s<k): barcode(n,m,k,lv+1,l,s+1,1)
    
    
"""
barcode(3,1,0,1,[1]+[0]*2,0,0)
barcode(3,1,0,1,[0]*3,0,0)
print(sum)
"""
n,m,k = [int(i) for i in input().strip().split()]
# n = len, m = consecutive, k = color_change
barcode(n,m,k,1,[0]*n,0,0)
#barcode(n,m,k,1,[1]+[0]*(n-1),0,0)
print(sum)
