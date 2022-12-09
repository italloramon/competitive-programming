x = int(input())
my_dict = {}
for _ in range(x):
    s = input().split()
    my_dict[s[0]] = s[1:]

while(True):
    p = input().split()
    if p[0] == "FIM":
        break
    l = my_dict[p[0]]
    if p[1] in l:
        print("Uhul! Seu amigo secreto vai adorar")
    else:
        print("Tente Novamente!")
