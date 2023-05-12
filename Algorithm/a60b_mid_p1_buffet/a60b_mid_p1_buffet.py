f,w,n = [int(i) for i in input().split()]
line = [int(i) for i in input().split()]
line.sort()
ans = 0
curr = 0
for i in line:
    if (i > curr):
        curr = i+2*w
        ans += 1
print(ans)