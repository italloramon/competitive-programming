s = input()
d = []
for l in s:
    if l not in d:
        d.append(l)

if len(d) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
