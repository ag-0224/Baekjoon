import math

n = int(input())

count = 0
for s in reversed(list(map(int, str(math.factorial(n))))):
  if s == 0:
    count += 1
  else:
    break

print(count)