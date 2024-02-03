n = int(input())

# 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
result = [1, -1, 1, 2, -1, 2, 3, 2, 3, 4]

count = 0

while n > 12:
  n -= 5
  count += 1

count += result[n-3]
print(count)