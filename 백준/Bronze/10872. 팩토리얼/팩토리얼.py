n = int(input())

data = [1]

for i in range(1, n + 1):
    data.append(data[i - 1] * i)

print(data[-1])