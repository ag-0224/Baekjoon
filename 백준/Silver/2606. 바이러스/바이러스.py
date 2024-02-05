v = int(input())
e = int(input())

graph = [[] for _ in range(v + 1)]

for _ in range(e):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

visited =[0 for _ in range(v + 1)]

def dfs(start):
    visited[start] = 1
    for nx in graph[start]:
        if visited[nx] == 0:
            dfs(nx)

dfs(1)
print(sum(visited) - 1)