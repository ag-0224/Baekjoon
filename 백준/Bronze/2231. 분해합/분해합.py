n = int(input())

result = 0
for i in range(1, n + 1):
  sum = 0
  sum += i
  s = list(str(i))
  length = len(s)
  for j in range(length):
    sum += int(s[length - j - 1])
  if sum == n:
    result = i
    break

print(result)