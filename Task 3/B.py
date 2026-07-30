n, k = map(int, input().split())
heights = list(map(int, input().split()))

for i in range(1, len(heights), 2):
    if k > 0 and heights[i] - 1 > heights[i - 1] and heights[i] - 1 > heights[i + 1]:
        heights[i] -= 1
        k -= 1

print(*heights)