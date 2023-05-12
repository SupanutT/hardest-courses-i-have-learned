import sys,bisect
input = sys.stdin.readline
w,n = [int(i) for i in input().split()]
l = sorted([int(i) for i in input().split()])
d = dict()

def robot(b,c):
    if (b,c) in d: return d[b,c]
    tmp = bisect.bisect_right(l,c)-bisect.bisect_left(l,b)
    if (c-b+1<3) or (tmp==0):
        d[b,c] = tmp
        return d[b,c]
    
    tmp = bisect.bisect_right(l,c)-bisect.bisect_left(l,b)
        
    u = (c-b+1)//3
    v = (c-b+2)//3
    P3 = robot(b+u+v,c)
    P2 = robot(b+u,b+u+v-1)
    P1 = robot(b,b+u-1)
    
    minimum = min(P1,P2,P3)
    d[b,c] = tmp+P1+P2+P3-minimum
    return d[b,c]

print(robot(1,w))