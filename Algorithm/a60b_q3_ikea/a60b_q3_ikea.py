def is_valid(order):
    done = []
    for item in order:
        for i in GT[item]:
            if (i not in done): return False
        done.append(item)
    return True

n,e = [int(i) for i in input().split()]
GT = [ [] for i in range(n+1)]
for i in range(e):
    a,b = [int(i) for i in input().split()]
    GT[b].append(a)

for i in range(5):
    order = [int(i) for i in input().split()]
    print("SUCCESS" if is_valid(order) else "FAIL")