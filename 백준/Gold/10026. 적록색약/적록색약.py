import sys
sys.setrecursionlimit(100000)

n = int(input())

graph = []
for _ in range(n):
    graph.append(input())

visited = [[0] * n for _ in range(n)]

dy = [1, 0, -1, 0]
dx = [0, 1, 0, -1]

def dfs(y, x, rgb):
    visited[y][x] = 1
    for i in range(len(dy)):
        ny = y + dy[i]
        nx = x + dx[i]
        if 0 <= ny < n and 0 <= nx < n:
            if graph[ny][nx] == rgb and visited[ny][nx] == 0:
                dfs(ny, nx, rgb)

def dfs2(y, x, rgb1, rgb2):
    visited[y][x] = 1
    for i in range(len(dy)):
        ny = y + dy[i]
        nx = x + dx[i]
        if 0 <= ny < n and 0 <= nx < n:
            if (graph[ny][nx] == rgb1 or graph[ny][nx] == rgb2) and visited[ny][nx] == 0:
                dfs2(ny, nx, rgb1, rgb2)

color = ['R', 'G', 'B']

count = 0
for c in color:
    for i in range(n):
        for j in range(n):
            if visited[i][j] == 0 and graph[i][j] == c:
                dfs(i, j, c)
                count += 1

visited = [[0] * n for _ in range(n)]

count2 = 0
for c in color:
    for i in range(n):
        for j in range(n):
            if visited[i][j] == 0 and graph[i][j] == c:
                if c == 'B':
                    dfs(i, j, c)
                    count2 += 1
                else:
                    dfs2(i, j, 'R', 'G')
                    count2 += 1       

print(count, count2)