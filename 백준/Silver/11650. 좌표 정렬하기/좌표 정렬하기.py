n = int(input())

data = []
for _ in range(n):
  data.append(list(map(int, input().split())))

data.sort(key = lambda x : x[1])

data.sort()

for i in data:
  print(i[0], i[1])