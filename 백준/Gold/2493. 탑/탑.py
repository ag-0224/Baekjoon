n = int(input())

stack = []
height = list(map(int, input().split()))

top_list = []

for i in range(len(height)):
    top_list.append({ 'height' : height[i], 'id' : i + 1})

for top in top_list:
    while stack:
        if stack[-1]['height'] >= top['height']:
            print(stack[-1]['id'], end=' ')
            stack.append(top)
            break
        else:
            stack.pop()

    if not stack:        
        stack.append(top)
        print(0, end=' ')