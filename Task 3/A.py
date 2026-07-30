H, A = map(int, input().split())

c = 0

while H > 0:
    H -= A
    c += 1

print(c)