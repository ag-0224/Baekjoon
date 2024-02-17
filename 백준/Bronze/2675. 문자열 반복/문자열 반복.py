t = int(input())

datas = []
for _ in range(t):
  datas.append(list(input().split()))

for data in datas:
  n = int(data[0])
  for i in map(str, data[1]):
    for _ in range(n):
      print(i, end='')
  print()