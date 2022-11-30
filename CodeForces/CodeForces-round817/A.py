t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    a = 0
    b = 0
    c = 0
    d = 0
    e = 0
    f = 0
    for l in s:
        if l == 'T':
            a+=1
        if l == 'i':
            b += 1
        if l == 'm':  
            c += 1
        if l == 'u': 
            d += 1
        if l == 'r':
            e += 1
        
        if l.isupper() and l != 'T':
            f = 1
    
    if a == 1 and b == 1 and c == 1 and d == 1 and e == 1 and f == 0 and len(s) == 5:
        print("YES")
    else:
        print("NO")
