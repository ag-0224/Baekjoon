data = []

for _ in range(10):
  data.append(int(input()) % 42)

print(len(set(data)))