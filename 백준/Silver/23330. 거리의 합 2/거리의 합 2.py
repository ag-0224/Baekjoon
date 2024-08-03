from sys import stdin

n = int(stdin.readline().strip())
nums = sorted(map(int,stdin.readline().strip().split()),reverse=True)

num = 0

for i in range(n):
    num += 2*(n-1-2*i)*nums[i]

print(num)