n,a,b,c = [int(i) for i in input().split()]
l = sorted([a,b,c])
found = False

def rope(sigma,count):
    global found
    if (sigma==n):
        print(count)
        found = True
    if found: return
    for i in l:
        if (sigma+i>n): break
        rope(sigma+i,count+1)
rope(0,0)