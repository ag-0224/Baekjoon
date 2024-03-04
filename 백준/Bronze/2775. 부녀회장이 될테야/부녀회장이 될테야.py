t = int(input())

test_case = []
for _ in range(t):
  k = int(input())
  n = int(input())
  test_case.append((k, n))
  
for test in test_case:
  k, n = test 
  data = [[0] * (n + 1) for _ in range(k + 1)]
  for a in range(k + 1):
    for b in range(n + 1):
      if a == 0:
        data[a][b]= b
      else:
        for h in range(b + 1):
          data[a][b] += data[a - 1][h]
  print(data[a][b])