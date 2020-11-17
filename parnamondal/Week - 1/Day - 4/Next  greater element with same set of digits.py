# Time Complexity - O(N)
# Space Complexity - O(1)

def find (nums):
    if len(nums)<=1:
        return nums
    ind=0
    n=len(nums)
    for i in range (n-1,0,-1):
        if nums[i]>nums[i-1]:
            ind=i
            break
        
    if ind==0:
        nums.reverse()
        return nums
    else:
        ind-=1
        j=0
        for i in range (n-1,ind,-1):
            if nums[ind]<nums[i]:
                j=i
                break
        nums[ind],nums[j]=nums[j],nums[ind]
        nums[ind+1:]=sorted(nums[ind+1:]) 
        return nums
            
for _ in range (int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    f=find(l)
    print (*f)