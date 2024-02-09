import sys

n = int(input())

data = []
for _ in range(n):
    data.append(int(sys.stdin.readline()))

for i in sorted(data):
    print(i)