import sys
input = sys.stdin.readline

n = int(input())
having_cards = list(map(int, input().split()))

m = int(input())
cards = list(map(int, input().split()))

having_cards.sort()

result = {}
for card in having_cards:
  if card in result:
    result[card] += 1
  else:
    result[card] = 1

for card in cards:
  if card in result:
    print(result[card], end=' ')
  else:
    print(0, end=' ')