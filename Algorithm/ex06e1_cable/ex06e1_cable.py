N = int(input())
m = [ [float('INF')]*N for i in range(N)]

for i in range(N-1):
    tmp = [int(i) for i in input().split()]
    for v,w in enumerate(tmp):
        m[i][v+i+1] = w
        m[v+i+1][i] = w
"""
selected_vertices = set()
selected_vertices.add(0)
selected_edges = []

while (len(selected_edges) < N):
    min_vertex = float('INF')
    min_edges = float('INF')
    for vertex in selected_vertices:
        for neighbor in range(N):
            if neighbor not in selected_vertices and\
               m[vertex][neighbor] < min_edges:
                min_vertex = neighbor
                min_edges = m[vertex][neighbor]
    selected_vertices.add(min_vertex)
    selected_edges.append(min_edges)
                
print(sum(selected_edges[:-1]))
"""

d = [0]+[float('INF')]*(N-1)
p = [0]+[-1]*(N-1)
in_MST = [False]*N

""" PRIM """
for i in range(N):
    u = d.index(min(d))
    d[u] = float('INF')
    in_MST[u] = True
    for v in range(N):
        if (not in_MST[v]) and (m[u][v] < d[v]):
            d[v] = m[u][v]
            p[v] = u
    print(i,d)
    print(i,p)
    print()
ans = 0
for i in range(1,N):
    ans += m[p[i]][i]
print(ans)








