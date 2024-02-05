t = int(input())

data = []
for _ in range(t):
    data.append(int(input()))

coins = [25, 10, 5, 1]

result = [[0 for _ in range(len(coins))] for _ in range(t)] 
for i in range(t):
    for j in range(len(coins)):
        result[i][j] = data[i] // coins[j]
        data[i] %= coins[j]

for i in range(t):
    for j in range(len(coins)):
        print(result[i][j], end = ' ')
    print()