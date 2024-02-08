import sys
sys.setrecursionlimit(100000)

n, m = map(int, input().split())

graph = []

for _ in range(n):
    graph.append(list(map(int, input().split())))

dy = [1, 0, -1, 0]
dx = [0, 1, 0, -1]

def dfs(y, x):
    visited[y][x] = 1
    for i in range(len(dy)):
        ny = y + dy[i]
        nx = x + dx[i]
        if 0 <= ny < n and 0 <= nx < m:
            if visited[ny][nx] == 0 and graph[ny][nx] > 0:
                dfs(ny, nx)

def check():
    for i in range(n):
        for j in range(m):
            if graph[i][j] > 0:
                return True
    return False

year = 0
while check():
    count = 0
    visited = [[0 for _ in range(m)] for _ in range(n)]
    ice = [[0 for _ in range(m)] for _ in range(n)]
    for i in range(n):
        for j in range(m):
            for k in range(len(dy)):
                ni = i + dy[k]
                nj = j + dx[k]
                if 0 <= ni < n and 0 <= nj < m:
                    if graph[ni][nj] <= 0:
                        ice[i][j] -= 1
    for i in range(n):
        for j in range(m):
            graph[i][j] += ice[i][j]
    year += 1
    for i in range(n):
        for j in range(m):
            if visited[i][j] == 0 and graph[i][j] > 0:
                dfs(i, j)
                count += 1
    if count > 1:
        break

if check():
    print(year)
else:
    print(0)