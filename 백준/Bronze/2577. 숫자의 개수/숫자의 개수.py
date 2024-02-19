a = int(input())
b = int(input())
c = int(input())

data = a * b * c

result = list(str(data))

for i in range(10):
  print(result.count(str(i)))