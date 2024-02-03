n = int(input())

data = [0, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2]

count = 0

while n > 10:
    n -= 7
    count += 1

count += data[n]

print(count)