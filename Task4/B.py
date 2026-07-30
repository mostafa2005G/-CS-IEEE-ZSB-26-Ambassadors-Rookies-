n = int(input())
s = input()
i = 0
count = 0
while i < n - 1:
    if s[i] == s[i+1]:
        count += 1
    i += 1
print(count)