data = []

for _ in range(28):
    data.append(int(input()))

data = set(data)
ans = set([ i + 1 for i in range(30)])

result = ans - data

result = list(result)

result.sort()

for i in result:
    print(i)