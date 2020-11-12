t = int(input())
for case in range(t):
    m, n = map(int, input().strip().split())
    arr1 = list(map(int, input().strip().split()))
    arr2 = list(map(int, input().strip().split()))
    arrSet = set(arr1)
    flag = True
    for i in arr2:
        if i not in arrSet:
            flag = False
            break
    if flag:
        print("Yes")
    else:
        print("No")
