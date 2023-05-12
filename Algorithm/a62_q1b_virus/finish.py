import sys
input = sys.stdin.readline

def isVirus(k, sol):
    if (k==1):
        if (sol == "01"): return True
        else: return False
    normalA = isVirus(k-1, sol[:int(len(sol)/2)])
    reverseA = isVirus(k-1, sol[:int(len(sol)/2)][::-1])
    normalB = isVirus(k-1, sol[int(len(sol)/2):])
    return (normalA or reverseA) and normalB

n,k = [int(i) for i in input().split()]
for i in range(n):
    sol = input().replace(" ","").strip()
    print("yes" if isVirus(k, sol) else "no")