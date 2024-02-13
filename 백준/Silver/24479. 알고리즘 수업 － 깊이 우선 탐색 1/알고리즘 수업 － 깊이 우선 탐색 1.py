import sys
sys.setrecursionlimit(1000000)

n, m, r = map(int, sys.stdin.readline().split())

graph = [[] for _ in range(n + 1)]

for _ in range(m):
    u, v = map(int, sys.stdin.readline().split())
    graph[u].append(v)
    graph[v].append(u)

visited = [0] * (n + 1)

count = 1
def dfs(start):
    global count
    visited[start] = count
    graph[start].sort()
    for i in graph[start]:
        if visited[i] == 0:
            count += 1
            dfs(i)

dfs(r)

for i in range(1, n + 1):
    print(visited[i])