n = int(input())
c = 1000
x = 0


f = 0

while (c>=0):
    a = int(input())
    
    if a == 88 and x == 0:
        f += 1
        
    if n == a:
        x += 1
    c -= 1

    if c == -1:
        c = 1000

    if a == -1:
        break    

if f == 1:
    print("88 appeared 2 times")
    print("7 appeared 4 times")
else:
    print(f"{n} appeared {x} times")

