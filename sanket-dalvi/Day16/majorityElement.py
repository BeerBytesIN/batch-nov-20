def majorityElement(A, N):
    if not N:
        return -1
    i = 1
    majElem = A[0]
    majCount = 1
    while i < N:
        if majCount == 0:
            majCount = 1
            majElem = A[i]
        if A[i] == majElem:
            majCount += 1
        else:
            majCount -= 1
        i += 1
    if majCount <= 1:
        return -1
    else:
        count = 0
        for i in A:
            if i == majElem:
                count += 1
    return count if count >= N//2 else -1


# Test
arr = [3, 1, 7, 8, 1, 3, 3, 2]
print(majorityElement(arr, len(arr)))
