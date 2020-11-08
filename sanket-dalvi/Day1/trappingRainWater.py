t = int(input())
for _ in range(t):
    _ = input()
    arr = list(map(int, input().strip().split()))
    sortedArray = sorted(enumerate(arr), key=lambda x: x[1], reverse=True)
    index = dict(map(lambda x: (x[1],x[0]), enumerate(arr)))
    l, n1 = sortedArray[0]
    r, n2 = sortedArray[1]
    r, l = max(l, r), min(l, r)
    water = min(n1, n2)*(r-l-1)
    for i in range(2, len(arr)):
        num = sortedArray[i][1]
        ind = sortedArray[i][0]
        if l < ind < r:
            water -= num
        elif ind < l:
            water += (l-ind-1)*num
            l = ind
        elif r < ind:
            water += (ind-r-1)*num
            r = ind
    print(water)