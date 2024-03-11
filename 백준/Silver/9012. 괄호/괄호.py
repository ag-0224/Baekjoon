n = int(input())

data_arr = []
for _ in range(n):
  data_arr.append(list(input()))

result_arr = []
for data in data_arr:
  stack = []
  for d in data:
    stack.append(d)
  count = 0
  while stack and count >= 0:
    s = stack.pop()
    if s == ')':
      count += 1
    else:
      count -= 1
  result_arr.append(count)

for r in result_arr:
  if r == 0:
    print('YES')
  else:
    print('NO')