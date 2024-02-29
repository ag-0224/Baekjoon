data = list(map(int, input().split()))

result = []
for i in range(len(data)):
  if data[i] == i + 1:
    result.append(1)
  elif data[i] == len(data) - i:
    result.append(-1)

if sum(result) == len(data):
  print("ascending")
elif sum(result) == -len(data):
  print("descending")
else:
  print("mixed")