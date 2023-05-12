import sys
input = sys.stdin.readline
n = int(input())
l = [int(i) for i in input().strip().split()]
if len(l)>2: l[2] += l[0]
for i in range(3,n):
    l[i] += max(l[i-2],l[i-3])
print(max(l))