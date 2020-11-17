test = int(input())
for k in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    window = int(input())
    for i in range(n - window + 1):
        for j in range(i, i + window):
            if arr[j] < 0:
                print(arr[j], end = ' ')
                break
            elif (i + window - 1 == j) and arr[j] > 0:    
                print(0, end = ' ')
    print()
    
