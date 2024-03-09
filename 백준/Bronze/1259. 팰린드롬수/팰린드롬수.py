input_arr = []

result = []
while True:
  n = input()
  if n == '0':
    break
  input_arr.append(list(n))

for arr in input_arr:
  ans = True
  for i in range(len(arr) // 2):
    if arr[i] == arr[len(arr) - i - 1]:
      continue
    else:
      ans = False
  result.append(ans)

for ans in result:
  if ans:
    print('yes')
  else:
    print('no')