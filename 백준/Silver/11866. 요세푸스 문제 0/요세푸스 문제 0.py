n, k = map(int, input().split())

people = list(range(1, n + 1))

current_index = 0
result = []
while people:
  current_index = (current_index + k - 1) % len(people)
  result.append(people.pop(current_index))

print('<' + ', '.join(map(str, result)) + '>')