def PalinArray(arr ,n):
    # Code here
    for m in arr:
        m =  str(m)
        for i in range(len(m)//2):
            if m[i] != m[-i-1]:
                return 0
    return 1