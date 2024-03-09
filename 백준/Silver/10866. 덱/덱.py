from collections import deque

n = int(input())

process = []
for _ in range(n):
  process.append(list(input().split()))

queue = deque()
for p in process:
  if len(p) == 2:
    if p[0] == 'push_back':
      queue.append(p[1])
    else:
      queue.appendleft(p[1])
  else:
    if p[0] == 'pop_back':
      if queue:
        print(queue.pop())
      else:
        print(-1)
    elif p[0] == 'pop_front':
      if queue:
        print(queue.popleft())
      else:
        print(-1)
    elif p[0] == 'size':
      print(len(queue))
    elif p[0] == 'empty':
      if queue:
        print(0)
      else:
        print(1)
    elif p[0] == 'front':
      if queue:
        print(queue[0])
      else:
        print(-1)
    else:
      if queue:
        print(queue[-1])
      else:
        print(-1)