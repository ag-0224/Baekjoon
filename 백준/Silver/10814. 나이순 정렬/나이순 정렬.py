n = int(input())

data = []
for _ in range(n):
  age, name = input().split()
  data.append([int(age), name])

data.sort(key=lambda x: x[0])

for d in data:
  print(d[0], d[1])