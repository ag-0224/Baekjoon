import math

t = int(input())

data = []
for _ in range(t):
  data.append(list(map(int, input().split())))

for i in data:
  h, w, n = i[0], i[1], i[2]
  height = n % h
  if height == 0:
    height = h
  address = math.ceil(n / h)
  print(height * 100 + address)