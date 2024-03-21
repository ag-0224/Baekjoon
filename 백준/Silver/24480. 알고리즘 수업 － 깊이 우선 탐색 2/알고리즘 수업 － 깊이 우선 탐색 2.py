import sys
sys.setrecursionlimit(10 ** 9)
input = sys.stdin.readline

n, m, r = map(int, input().split())

graph = [[] for _ in range(n + 1)]
for _ in range(m):
  u, v = map(int, input().split())
  graph[u].append(v)
  graph[v].append(u)

order = [0] * (n + 1)

depth = 1
def dfs(start):
  global depth
  order[start] += depth
  for i in sorted(graph[start], reverse = True):
    if order[i] == 0:
      depth += 1
      dfs(i)

dfs(r)
print(*order[1:], sep = '\n')