import sys
input = sys.stdin.readline

n = int(input())
l = []
for i in range(n):
    l.append([int(i) for i in input().strip().split()])
s = [0]*n
for i,num in enumerate(l[-1]):
    s[i] += num
    index = i
    for item in l[:-1][::-1]:
        #print(item, index) 
        left = 0 if (index==0) else item[index-1]
        right = item[len(item)-1] if (index>=len(item)) else item[index]
        if (left>=right):
            index -= 1
            s[i] += left
        else:
            s[i] += right
print(max(s))
