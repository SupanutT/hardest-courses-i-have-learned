import sys
input = sys.stdin.readline
n,k = [int(i) for i in input().strip().split()]
l = [[int(i) for i in input().strip().split()] for j in range(n)]

def virus(l):
    global isVirus
    if len(l)==2: return l.count(1)
    mid = len(l)//2
    left = virus(l[:mid])
    right = virus(l[mid:])
    if (abs(left-right)>1): isVirus = False
    return left+right
for i in l:
    isVirus = True
    virus(i)
    print("yes" if isVirus else "no")