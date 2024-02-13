data = []

for _ in range(9):
    data.append(int(input()))

print(max(data))
print(data.index(max(data)) + 1)