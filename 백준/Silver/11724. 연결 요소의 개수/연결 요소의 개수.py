import sys
sys.setrecursionlimit(100000)

n, m = map(int, sys.stdin.readline().rstrip().split())

graph = [[] for _ in range(n + 1)]

visited = [False] * (n + 1)

for _ in range(m):
    u, v = map(int, sys.stdin.readline().rstrip().split())
    graph[u].append(v)
    graph[v].append(u)

def dfs(graph, v, visited):
    visited[v] = True
    for e in graph[v]:
        if not visited[e]:
            dfs(graph, e, visited)

count = 0
for i in range(1, n + 1):
    if not visited[i]:
        dfs(graph, i, visited)
        count += 1

print(count)