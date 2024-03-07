import sys

n = int(input())

data = [0] * 10001

for _ in range(n):
  index = int(sys.stdin.readline().rstrip())
  data[index] += 1

for i in range(10001):
  if data[i] != 0:
    for _ in range(data[i]):
      print(i)