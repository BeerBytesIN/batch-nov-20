for t in range(int(input())):
    m, n = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    mp = {}
    ans = 'Yes'
    for i in arr1:
        if mp.get(i, False) == False:
            mp[i] = True

    for i in arr2:
        if mp.get(i, False) == False:
            ans = 'No'
            break
    print(ans)