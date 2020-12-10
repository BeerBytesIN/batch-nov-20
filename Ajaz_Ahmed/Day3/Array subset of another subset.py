test = int(input())
for i in range(test):
    s_arr1, s_arr2 = map(int,input().split())
    arr1= list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    lst = [0]
    count = 0
    for i in range(s_arr1):
        if arr1[i] in arr2:
            count += 1
            lst.append(count)
    if max(lst) == s_arr2:
        print('Yes')
    else:
        print('No')
            
