n, x = map(int, input().split())

data = list(map(int, input().split()))

result = []
for i in data:
  if i < x:
    result.append(i)
    
for i in result:
  print(i, end = ' ')
print()