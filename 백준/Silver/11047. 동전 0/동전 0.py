n, k = map(int, input().split())

coin = []
for _ in range(n):
    coin.append(int(input()))

coin.sort(reverse=True)

result = 0
for i in coin:
    result += (k // i)
    k %= i
    

print(result)