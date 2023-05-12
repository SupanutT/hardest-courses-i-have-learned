import sys
input = sys.stdin.readline

n,m,k = [int(i) for i in input().split()]
A = [int(i) for i in input().split()]
A.sort()
print(*A)
best_ans = float('inf')
used = [False]*n

def cs(total,curr,m,left,used):
    global best_ans
    # if (curr == n): return
    print(total, curr, used)
    if (m == 0):
        best_ans = min(abs(k-total), best_ans)
        return
    if (left < m): return
    next_val = abs(total+A[curr]-k)
    if (next_val > best_ans): return
    used[curr] = True
    cs(total+A[curr], curr+1, m-1, left-1, used)
    used[curr] = False
    cs(total, curr+1, m, left-1, used)
cs(0,0,m,n,used)
print(best_ans)