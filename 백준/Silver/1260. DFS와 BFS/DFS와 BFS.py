import sys
sys.setrecursionlimit(100000)
from collections import deque

n, m, v = map(int, input().split())

graph = [[] for _ in range(n + 1)]
for _ in range(m):
    y, x = map(int, input().split())
    graph[y].append(x)
    graph[x].append(y)
    graph[y].sort()
    graph[x].sort()



visited = [False] * (n + 1)
route = []
def dfs(start):
    route.append(start)
    visited[start] = True
    for g in graph[start]:
        if not visited[g]:
            dfs(g)

dfs(v)
for i in route:
    print(i, end = " ")
print()

visited = [False] * (n + 1)
route = []
def bfs(start):
    route.append(start)
    queue = deque()
    queue.append(start)
    visited[start] = True
    while queue:
        vertex = queue.popleft()
        for g in graph[vertex]:
            if not visited[g]:
                visited[g] = True
                route.append(g)
                queue.append(g)

bfs(v)
for i in route:
    print(i, end = " ")
print()