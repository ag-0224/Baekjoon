import sys
input = sys.stdin.readline

n, m = map(int, input().split())

board = []
for _ in range(n):
  board.append(list(input()))

def countRepaint(x, y):
  blackStarts = 0
  whiteStarts = 0
  for i in range(8):
    for j in range(8):
      if (i + j) % 2 == 0:
        if board[x + i][y + j] == 'B':
          whiteStarts += 1
        else:
          blackStarts += 1
      else:
        if board[x + i][y + j] == 'W':
          whiteStarts += 1
        else:
          blackStarts += 1
  return min(blackStarts, whiteStarts)

answer = 100000

for i in range(n - 7):
  for j in range(m - 7):
    answer = min(answer, countRepaint(i, j))

print(answer)