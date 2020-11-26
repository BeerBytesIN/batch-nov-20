for t in range(int(input())):
    m, n = list(map(int, input().split()))
    arr = list(map(int, input().split()))
    a = []
    for i in range(0, m * n, n):
        l = arr[i:i + n][::]
        a.append(l)
    ##print(a)
    ans = []

    sr, lr, sc, lc = 0, m - 1, 0, n - 1
    while sr <= lr and sc <= lc:
        # first row
        for j in range(sc, lc + 1):
            ans.append(a[sr][j])
        sr += 1

        # last column
        for i in range(sr, lr + 1):
            ans.append(a[i][lc])
        lc -= 1

        # last row
        if lr >= sr:
            for j in range(lc, sc - 1, -1):
                ans.append(a[lr][j])
            lr -= 1

        # first column
        if lc >= sc:
            for i in range(lr, sr - 1, -1):
                ans.append(a[i][sc])
            sc += 1
    print(*ans)
