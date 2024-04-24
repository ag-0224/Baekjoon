from collections import deque
import sys

queue = deque()

input = sys.stdin.readline

n = int(input())

for _ in range(n):
    command = input().split()

    if command[0] == 'push':
        queue.append(command[1])
    elif command[0] == 'pop':
        if not queue:
            print(-1)
        else:
            print(queue.popleft())
    elif command[0] == 'size':
        print(len(queue))
    elif command[0] == 'empty':
        if not queue:
            print(1)
        else:
            print(0)
    elif command[0] == 'front':
        if not queue:
            print(-1)
        else:
            print(queue[0])
    elif command[0] == 'back':
        if not queue:
            print(-1)
        else:
            print(queue[-1])