n = int(input())
l = [-float('inf')]*n

def Nqueen(step,l,used):
    if (step < n):
        for i in range(n):
            if (!used[i]):
                used[i] = True
                l[step] = i
                Nqueen(step+1, l, used)
                used[i] = False
    else:
        check(l)
