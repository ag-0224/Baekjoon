import sys
sys.setrecursionlimit(100000)

n = int(input())

graph = []

for _ in range(n):
    graph.append(list(map(int, input().split())))

dy = [1, 0, -1, 0]
dx = [0, 1, 0, -1]

def dfs(y, x, visited, h):
    visited[y][x] = 1
    for i in range(len(dy)):
        ny = y + dy[i]
        nx = x + dx[i]
        if 0 <= ny < n and 0 <= nx < n:
            if graph[ny][nx] > h and visited[ny][nx] == 0:
                dfs(ny, nx, visited, h) 

max_h = 0  
for i in range(n):
    for j in range(n):
        if max_h < graph[i][j]:
            max_h = graph[i][j]

result = []

for h in range(max_h):
    visited = [[0] * n for _ in range(n)]
    count = 0
    for i in range(n):
        for j in range(n):
            if graph[i][j] > h and visited[i][j] == 0:
                dfs(i, j, visited, h)
                count += 1
    result.append(count)

print(max(result))