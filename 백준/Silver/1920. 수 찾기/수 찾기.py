n = int(input())
data1 = list(map(int, input().split()))

m = int(input())
data2 = list(map(int, input().split()))

data1.sort()

def binary_search(data, target, start, end):
  while start <= end:
    mid = (start + end) // 2
    if data[mid] == target:
      return 1
    elif data[mid] > target:
      end = mid - 1
    else:
      start = mid + 1
  return 0

for i in data2:
  print(binary_search(data1, i, 0, n-1))