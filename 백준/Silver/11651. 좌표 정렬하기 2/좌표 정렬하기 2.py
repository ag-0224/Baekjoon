n = int(input())

coordinate = []
for _ in range(n):
  coordinate.append(tuple(map(int, input().split())))

coordinate.sort()
coordinate.sort(key=lambda x: x[1])

for c in coordinate:
  print(c[0], c[1])