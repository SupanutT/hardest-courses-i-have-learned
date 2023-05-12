import sys
input = sys.stdin.readline

n,m,k,w = [int(i) for i in input().split()]
pos = [int(i)-1 for i in input().split()]
health = [int(i) for i in input().split()]

prev = float('inf')
location = [False]*n

for i,p in enumerate(pos):
    if (not k): break
    if (p == prev): continue
    else: prev = p
    for x in range(max(0,p-w), min(n,p+w+1)):
        if (not location[x]):
            health[i] -= 1
            k -= 1
            location[x] = True
        if (not health[i]) or (not k):
            break
        
print(sum(health))