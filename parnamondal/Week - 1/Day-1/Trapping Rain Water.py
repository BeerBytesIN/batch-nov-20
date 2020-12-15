# Time Complexity - O(N)
# Space Complexity - O(1)

def find (n,a):
    left=[0]*n
    right=[0]*n
    
    # for left traversing of the array
    left[0]=a[0]
    for i in range (1,n):
        left[i]=max(left[i-1],a[i])
    # for right traversing 
    right[n-1]=a[n-1]
    for i in range (n-2,-1,-1):
        right[i]=max(right[i+1],a[i])
    count=0
    
    # traversing to find the amount of trapped water 
    for i in range (n):
        count+=min(left[i],right[i])-a[i]
    return count
        
        
            
for _ in range (int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    print(find(n,a))