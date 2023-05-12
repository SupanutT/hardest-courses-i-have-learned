import sys
input = sys.stdin.readline

n,m,k,w = [int(i) for i in input().strip().split()]
p = [int(i) for i in input().strip().split()]
h = [int(i) for i in input().strip().split()]
t = [int(i) for i in input().strip().split()]

d = dict.fromkeys(p, 0)
for i, hp in enumerate(h):
    d[p[i]] += hp

for i, towerPos in enumerate(t):
    for j in range(max(0,towerPos-w), min(n,towerPos+w)+1):
        if j in d:
            d[j] -= 1
            if (d[j] == 0): d.pop(j)
            break
print(sum(d.values()))