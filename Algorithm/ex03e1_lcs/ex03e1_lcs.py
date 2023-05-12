import sys
input = sys.stdin.readline

A = input()
B = input()
l = [[0 for i in range(len(B))] for j in range(len(A))]
def recurr(i,j):
    if (i==0) or (j==0): return 0
    if (l[i][j]!=0): return l[i][j]
    # print(i,j)
    if (A[i-1]==B[j-1]):
        l[i][j] = recurr(i-1,j-1)+1
        return l[i][j]
    if (A[i-1]!=B[j-1]):
        l[i][j] = max(recurr(i-1,j),recurr(i,j-1))
        return l[i][j]
recurr(len(A)-1,len(B)-1)
print(max(map(max,l)))