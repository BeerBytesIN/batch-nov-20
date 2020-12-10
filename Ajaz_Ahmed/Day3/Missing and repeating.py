def findTwoElement(arr, n): 
        repeat = 0
        missing = 0
        for i in range(1, n + 1):
            if i in arr:
                continue
            else:
                missing = i
                break
        for i in range(1, n + 1):
            if arr[i -1] in arr[i:]:
                repeat = arr[i -1]
        
        # return repeat,missing 
        print(f'{missing},{repeat}')
    
n = int(input())    
arr = list(map(int, input().split()))
findTwoElement(arr, n)
