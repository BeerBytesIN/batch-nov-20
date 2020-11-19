# Time Complexity - O(NlogN)
# Space Complexity - O(N)

class Solution:
    def countSmaller(self, nums: List[int]) -> List[int]:
        n=len(nums)
        if not n:
            return []
        out=[0]
        sor=[nums[-1]]
        def search (arr,tar):
            mn=len(arr)
            l,r=0,len(arr)-1
            mid=l+(r-l)//2
            if arr[0]>=tar:
                return 0
            if arr[-1]<tar:
                return mn
            while l<=r:
                mid=l+(r-l)//2
                if arr[mid]==tar:
                    while mid>0 and arr[mid]==tar:
                        mid-=1
                    return mid+1
                elif arr[mid]<tar:
                    l=mid+1
                else:
                    r=mid-1
            return l
                    
            
        for i in range (n-2,-1,-1):
            ind=search(sor,nums[i])
            out.append(ind)
            sor.insert(ind,nums[i])
        return out[::-1]
    
        
        