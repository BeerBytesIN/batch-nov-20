t = int(input())
for case in range(t):
    _ = input()
    arr = list(map(int, input().strip().split()))
    k = int(input())
    res = [0]*(len(arr)-k+1)
    j = -1
    for i in range(len(arr)):
        if arr[i] < 0:
            while j < i:
                j += 1
                if j >= len(res): break
                res[j] = arr[i]
        if j <= i-k:
            j += 1
        if j >= len(res): break
    print(*res)
