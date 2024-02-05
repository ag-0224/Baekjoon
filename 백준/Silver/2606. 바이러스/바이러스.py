n = int(input())

m = int(input())

data = []

for _ in range(m):
    data.append(tuple(map(int, input().split())))

data.sort()

visited = [0 for _ in range(n)]

def dfs(start):
  visited[start - 1] = 1
  for d in data:
      if d[0] == start and visited[d[1] - 1] == 0:
        dfs(d[1])
      elif d[1] == start and visited[d[0] - 1] == 0:
         dfs(d[0])


dfs(1)

count = 0
for i in range(1, n):
   if visited[i] == 1:
      count += 1

print(count)