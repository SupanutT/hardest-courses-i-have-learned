import sys
input = sys.stdin.readline
n,m = [int(i) for i in input().strip().split()]
l = [int(i) for i in input().strip().split()]
s = [int(i) for i in input().strip().split()]
t = set()
for i,a in enumerate(l):
    for b in l[:i]:
        t.add(a+b)
    for k,c in enumerate(s):
        if isinstance(c,str): continue
        if (c-a in t): s[k] = "YES"
for i in s: print("NO" if i != "YES" else "YES")
