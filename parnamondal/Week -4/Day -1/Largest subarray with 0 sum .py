# Time Complexity - O(N)
# Space Complexity - O(N)

def maxLen(n, arr):
    s=0
    p={}
    p[0]=-1
    l=0
    m=0
    for i in range (n):
        s+=arr[i]
        if (s in p):
            l=i-p[s]
            m=max(l,m)
        else :
            p[s]=i
    return m
            
