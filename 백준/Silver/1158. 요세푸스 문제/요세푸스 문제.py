from collections import deque

m, k = map(int, input().split())

queue = deque()

for i in range(m):
    queue.append(i + 1)

print('<', end='')
while queue:
    for _ in range(k - 1):
        a = queue.popleft()
        queue.append(a)
    print(queue.popleft(), end='')
    if queue:
        print(', ', end='')
print('>')