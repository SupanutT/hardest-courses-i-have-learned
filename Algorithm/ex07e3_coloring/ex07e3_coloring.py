def check(colors,u,k):
    global adj
    for i in adj[u]:
        if (colors[i] == k):
            return False
    return True

n,e = [int(i) for i in input().split()]
adj = [[] for i in range(n)]

for i in range(e):
    a,b = [int(i) for i in input().split()]
    adj[a].append(b)
    adj[b].append(a)
    
color = [1]+[0]*(n-1)
print(color)
ans = float('inf')
q = [(color,1,2)]
s = 0
while (len(q) != 0):
    color,next_index,next_color = q.pop()
    if (next_index != n):
        for i in range(next_color,0,-1):
            if (i >= ans): continue
            if (check(color,next_index, i)):
                b = color[:]
                b[next_index] = i
                if (i == next_color):
                    q.append((b,next_index+1,next_color+1))
                else:
                    q.append((b,next_index+1,next_color))
    else:
        ans = min(ans, max(color))
print(ans)