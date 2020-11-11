def findTwoElement(self, arr, n):
    # code here

    for i in range(n):
        tmp = abs(arr[i])
        if arr[tmp - 1] < 0:
            r = tmp
        else:
            arr[tmp - 1] *= -1
    for i in range(n):
        if arr[i] > 0:
            m = i + 1
            break
    return r, m