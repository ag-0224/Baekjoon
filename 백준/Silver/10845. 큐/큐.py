from collections import deque

n = int(input())

process = []
for _ in range(n):
  process.append(list(input().split()))

queue = deque()
for p in process:
  if len(p) == 2:
    queue.append(p[1])
  else:
    if p[0] == 'pop':
      if len(queue) == 0:
        print(-1)
      else:
        print(queue.popleft())
    elif p[0] == 'size':
      print(len(queue))
    elif p[0] == 'empty':
      if len(queue) == 0:
        print(1)
      else:
        print(0)
    elif p[0] == 'front':
      if len(queue) == 0:
        print(-1)
      else:
        print(queue[0])
    elif p[0] == 'back':
      if len(queue) == 0:
        print(-1)
      else:
        print(queue[-1])
