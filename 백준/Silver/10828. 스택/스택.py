n = int(input())

process = []
for _ in range(n):
  process.append(list(input().split()))

stack = []
for p in process:
  if len(p) == 2:
    stack.append(p[1])
  else:
    if p[0] == 'pop':
      if len(stack) == 0:
        print(-1)
      else:
        print(stack.pop())
    elif p[0] == 'size':
      print(len(stack))
    elif p[0] == 'empty':
      if len(stack) == 0:
        print(1)
      else:
        print(0)
    else:
      if len(stack) == 0:
        print(-1)
      else:
        print(stack[-1])