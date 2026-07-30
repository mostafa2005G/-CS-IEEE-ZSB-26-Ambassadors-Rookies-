n = int(input())

s = {}

for i in range(n):
    team = input()

    if team in s:
        s[team] += 1
    else:
        s[team] = 1

winner = ""
max_goals = 0

for team in s:
    if s[team] > max_goals:
        max_goals = s[team]
        winner = team

print(winner)