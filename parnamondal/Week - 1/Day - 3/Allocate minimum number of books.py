# Time Complexity - O(NlogN)
# Space Complexity - O(1)

def possornot(arr,limit,n,m):
    student=1
    currsum=0
    for i in arr:
        if i>limit:
            return False
        if currsum+i>limit:
            student+=1
            currsum=i
            if student>m:
                return False
        else:
            currsum+=i
    return True
def findPages(arr, n, m):
    # n: no of book
    # m: no of students
    if n<m:
        return -1
    #return: the expected answer if possible else return -1
    res=10**9
    low,high=0,sum(arr)
    while low<=high:
        mid=(low+high)//2
        if possornot(arr,mid,n,m):
            res=min(res,mid)
            high=mid-1
        else:
            low=mid+1
    return res


