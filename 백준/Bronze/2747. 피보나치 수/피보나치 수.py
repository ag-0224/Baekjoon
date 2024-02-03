n = int(input())

data = [1, 1]
for i in range(n - 1):
    data.append(data[len(data) - 1] + data[len(data) - 2])
 
print(data[n - 1])