import sys
sys.setrecursionlimit(100000)

dy = [1, 0, -1, 0, -1, -1, 1, 1]
dx = [0, 1, 0, -1, -1, 1, 1, -1]

def dfs(y, x, graph):
    graph[y][x] = 0
    for i in range(len(dy)):
        ny = y + dy[i]
        nx = x + dx[i]
        if 0 <= ny < len(graph) and 0 <= nx < len(graph[0]):
            if graph[ny][nx] == 1:
                dfs(ny, nx, graph)

result = []
while True:
    count = 0
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    graph = []
    for _ in range(h):
        graph.append(list(map(int, input().split())))
    for i in range(h):
        for j in range(w):
            if graph[i][j] == 1:
                dfs(i, j, graph)
                count += 1
    result.append(count)

for i in result:
    print(i)