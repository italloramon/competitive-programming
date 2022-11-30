t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    arr.sort()
    cnt = 0
    
    if len(arr) == 1:
        print("YES")
    else:
        for i in range(0, (len(arr)-1)):
            if arr[i] < arr[i+1]:
                cnt += 1
        
        if cnt == len(arr) - 1:
            print("YES")
        else:
            print("NO")
