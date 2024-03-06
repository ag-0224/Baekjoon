m, n = map(int, input().split())

def factor(n):
  result = []
  for i in range(1, n + 1):
    if n % i == 0:
      result.append(i)
  return result

m_data = factor(m)
n_data = factor(n)

gcm = max(list(set(m_data) & set(n_data)))
lcm = m * n // gcm
print(gcm)
print(lcm)