# n = int(input())
# count = 0
# 
# def ISS(old, total):
#     global count
#     if (total > n): return
#     if (total == n): count+= 1;return
#     for i in range(old, n+1):
#         if (total + i > n): break
#         ISS(i, total+i)
# ISS(1,0)
# print(count)

n = int(input())
l = [1] + [0]*n
for i in range(1,n+1):
    for j in range(i,n+1):
        l[j] = l[j]+l[j-i]
print(l[-1])