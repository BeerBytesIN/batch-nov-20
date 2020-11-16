arr = [3, 1, 2, 2, 1, 2, 3, 3]
k = 4
n = 8

def majority(arr):
    arr.sort()
    print(arr)
    count = 1
    total = []
    for i in range(n - 1):
        if arr[i] == arr[i+1]:
            count += 1
            if count > n/k:
                total.append(arr[i])
        else:
            count = 1
    return(total)   

majority(arr)  

# Solved on my own IDE since I could not access the program on gfg.
