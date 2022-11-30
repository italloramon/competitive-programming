t = int(input())

for _ in range(t):
    f = 0
    for i in range(9):
        cnt = 0
        l = input().split()
        if len(l) != 0:
            for line in l:
                for char in line:
                    if char == 'R':
                        cnt += 1
            if cnt == 8:
                f += 1
    if f == 0:
        print("B")
    else:
        print("R")
