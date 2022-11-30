s = input().split("+")

for i in range(len(s)):
    s[i] = int(s[i])

s.sort()

for i in range(len(s)):
    if i == len(s) - 1:
        print(s[i])
    else:
        print(f"{s[i]}+", end="")
