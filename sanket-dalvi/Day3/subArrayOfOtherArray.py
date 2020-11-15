

t = int(input())
for case in range(t):
    m, n = map(int, input().strip().split())
    arr1 = list(map(int, input().strip().split()))
    arr2 = list(map(int, input().strip().split()))
    for i in range(0, len(arr1)):
        if i + len(arr2) > len(arr1):
            print("No")
            break
        flag = True
        for j in range(len(arr2)):
            if arr1[i+j] != arr2[j]:
                flag = False
                break
        if flag:
            print("Yes")
            break