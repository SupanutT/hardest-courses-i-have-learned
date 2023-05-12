n,l=int(input()),list(map(int,input().split()))
for i in range(1,n):l[i]+=max(l[max(0,i-3):i])
print(l[-1])