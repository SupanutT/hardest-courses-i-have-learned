import sys
input = sys.stdin.readline

n = int(input())
l = sorted([[int(i) for i in input().split()] for j in range(n)])
ans = 1
maximum = l[-1][1]
for i in l[::-1]:
    if (i[1]>maximum):
        ans += 1
        maximum = i[1]
print(ans)    
