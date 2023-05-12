n,e = [int(i) for i in input().split()]
GT = [ [] for i in range(n)]
for i in range(e):
    a,b = [int(i)-1 for i in input().split()]
    GT[b].append(a)
for i in range(5):
    tmp = [int(i)-1 for i in input().split()]
    color = [0 for i in range(n+1)]
    correct = True
    for u in tmp:
        if (not correct): break
        color[u] = 1
        for v in GT[u]:
            if (color[v] == 0): correct = False
    print("SUCCESS" if correct else "FAIL")

            
            