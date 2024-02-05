n = int(input())

graph = []

for _ in range(n):
    graph.append(list(map(int, input())))

dy = [1, 0, -1, 0]
dx = [0, 1, 0, -1]

visited = [[0 for _ in range(n)] for _ in range(n)]

result = []
def dfs(y, x):
    visited[y][x] = 1
    for i in range(len(dy)):
        ny = y + dy[i]
        nx = x + dx[i]
        if 0 <= ny < n and 0 <= nx < n:
            if graph[ny][nx] == 1 and visited[ny][nx] == 0:
                result[len(result) - 1] += 1
                dfs(ny, nx)

for i in range(n):
    for j in range(n):
          if graph[i][j] == 1 and visited[i][j] == 0:
              result.append(1)
              dfs(i, j)

result.sort()
print(len(result))
for i in result:
    print(i)