import sys
input = sys.stdin.readline
n,k = [int(i) for i in input().split()]
l = [int(i) for i in input().split()]

for i in range(k+1,n):
    l[i]+=min(l[max(0,i-1-k-k):i])
print(min(l[-k-1:]))