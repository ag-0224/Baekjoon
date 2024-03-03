n = int(input())

score = list(map(int, input().split()))

standard = max(score)

new_score = []

for i in score:
  new_score.append(i/standard*100)

print(sum(new_score)/n)