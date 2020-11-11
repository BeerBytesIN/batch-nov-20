t = int(input())
for case in range(t):
    _ = int(input())
    arr = list(map(int, input().strip().split()))
    arrSum = {0}
    currSum = 0
    flag = False
    for i in arr:
        currSum += i
        if currSum in arrSum:
            flag = True
            break
        else:
            arrSum.add(currSum)
    if flag:
        print("Yes")
    else:
        print("No")