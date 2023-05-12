n = int(input())
l = [1,1] + [0]*(n-2)
for i in range(2,n):
    l[i] = l[i-1] + l[i-2]
print(l[-1])