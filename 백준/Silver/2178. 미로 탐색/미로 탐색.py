from collections import deque

n, m = map(int, input().split())

graph = []

for _ in range(n):
    graph.append(list(map(int, input())))

dy = [1, 0, -1, 0]
dx = [0, 1, 0, -1]

visited = [[0] * m for _ in range(n)]

def bfs(start):
    queue = deque()
    queue.append(start)
    while queue:
        yy, xx = queue.popleft()
        visited[yy][xx] = 1
        for i in range(len(dy)):
            ny = yy + dy[i]
            nx = xx + dx[i]
            if 0 <= ny < n and 0 <= nx < m:
                if graph[ny][nx] == 1 and visited[ny][nx] == 0:
                    graph[ny][nx] += graph[yy][xx]
                    queue.append((ny, nx))

bfs((0, 0))
print(graph[n - 1][m - 1])