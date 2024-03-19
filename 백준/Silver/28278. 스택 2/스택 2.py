import sys

n = int(input())

command = []
for _ in range(n):
  command.append(list(map(int, sys.stdin.readline().split())))

stack = []
for c in command:
  if c[0] == 1:
    stack.append(c[1])
  elif c[0] == 2:
    if stack:
      print(stack.pop())
    else:
      print(-1)
  elif c[0] == 3:
    print(len(stack))
  elif c[0] == 4:
    if stack:
      print(0)
    else:
      print(1)
  else:
    if stack:
      print(stack[-1])
    else:
      print(-1)