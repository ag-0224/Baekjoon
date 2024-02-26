n = int(input())

data = []
for _ in range(n):
    a, b = map(int, input().split())
    data.append(a + b)

for i in range(len(data)):
  print("Case #" + str(i + 1) + ": " + str(data[i]))