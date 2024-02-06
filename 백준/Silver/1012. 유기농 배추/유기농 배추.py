import sys
sys.setrecursionlimit(10000)

t = int(input())

dy = [1, 0, -1, 0]
dx = [0, 1, 0, -1]

def dfs(y, x):
    graph[y][x] = 0
    for i in range(len(dy)):
        ny = y + dy[i]
        nx = x + dx[i]
        if 0 <= ny < n and 0 <= nx < m:
            if graph[ny][nx] == 1:
                dfs(ny, nx)

result = []
for _ in range(t):
    count = 0
    m, n, k = map(int, input().split())
    graph = [[0] * m for _ in range(n)]
    for _ in range(k):
        x, y = map(int, input().split())
        graph[y][x] = 1
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1:
                dfs(i, j)
                count += 1
    result.append(count)

for i in result:
    print(i)