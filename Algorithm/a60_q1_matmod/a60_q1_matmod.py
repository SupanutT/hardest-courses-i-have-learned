import sys
input = sys.stdin.readline

n,k = [int(i) for i in input().split()]
l = [int(i) for i in input().split()]
tmp = l
for i in range(n-1):
    tmp = [((tmp[0]*l[0])+(tmp[1]*l[2]))%k,
           ((tmp[0]*l[1])+(tmp[1]*l[3]))%k,
           ((tmp[2]*l[0])+(tmp[3]*l[2]))%k,
           ((tmp[2]*l[1])+(tmp[3]*l[3]))%k]
print(" ".join([str(i) for i in tmp]))