# Time Complexity- O(N)
# Space Complexity - O(1)

def PalinArray(a ,n):
    # Code here
    c=0
    for i in a:
        i=str(i)
        if i==i[::-1]:
            c+=1
    if c==n:
        return 1
    return 0

