import sys
input = sys.stdin.readline

n = int(input())
l = [list(int(i) for i in input().split()) for j in range(n)]

for row in range(1,n):
    for col in range(1,n):
        l[row][col] = max(l[row-1][col-1]+l[row][col], l[row][col])
print(max([max(i) for i in l]))