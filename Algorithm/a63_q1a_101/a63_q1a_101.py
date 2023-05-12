n = int(input())

ans = 21
l = [2,4,7,12,21]
minus = 3
for i in range(6,n+1):
    minus += l[0]
    ans = (ans*2-(minus))%100000007
    l[:-1] = l[1:]
    l[-1] = ans

print(ans)
