n,w = [int(i) for i in input().split()]
l = [int(i) for i in input().split()]
l.sort()

curr = 0
ans = 0

for i in l:
    if (i > curr):
        ans += 1
        curr = i+w-1
print(ans)