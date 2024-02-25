n = int(input())

data = []
for _ in range(n):
  data.append(list(input()))

result_data = []
for d in data:
  result = 0
  count = 0
  for i in d:
    if i == 'O':
      count += 1
      result += count
    else:
      count = 0
  result_data.append(result)

for i in result_data:
  print(i)