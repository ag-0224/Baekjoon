import math

t = int(input())

data = []

for _ in range(t):
    data.append(tuple(map(int, input().split())))

result = []
for d in data:
    result.append(math.factorial(d[1]) / (math.factorial(d[0]) * math.factorial(d[1] - d[0])))
        

for i in result:
    print(int(i))