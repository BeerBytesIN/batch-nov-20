def sumZero(arr, size):    
    if 0 in arr:
        return 'Yes'
    lst = set()  
    sums = 0
    for i in range(size):
        sums += arr[i]
        if sums in lst:
            return 'Yes'
        lst.add(sums)
    return 'No'   
    
test = int(input())

for i in range(test):
    size = int(input())
    arr = list(map(int, input().split()))
    print(sumZero(arr,size))
    
