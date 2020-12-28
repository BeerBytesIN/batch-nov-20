# Time Complexity - O(NlogN)
# Space Complexity - O(N)


class Solution:
    def reversePairs(self, nums: List[int]) -> int:
        n=len(nums)
        if n<=1:
            return 0
        def mergesort (nums,low,high,mid):
            cnt=0
            j=mid+1
            for i in range (low,mid+1):
                while(j<=high and nums[i]>nums[j]*2):
                    j+=1
                cnt+=(j-(mid+1))
            tmp=[]
            left,right=low,mid+1
            
            while (left<=mid and right<=high):
                if nums[left]<=nums[right]:
                    tmp.append(nums[left])
                    left+=1
                else:
                    tmp.append(nums[right])
                    right+=1
            while left<=mid:
                tmp.append(nums[left])
                left+=1
            while right<=high:
                tmp.append(nums[right])
                right+=1
            for i in range (low,high+1):
                nums[i]=tmp[i-low]
            return cnt
                    
                    
                    
            
                    
                    
        def merge(nums,low,high):
            if low>=high:
                return 0
            #inv=0
            mid=(low+high)//2
            inv=merge(nums,low,mid)
            inv+=merge(nums,mid+1,high)
            inv+=mergesort(nums,low,high,mid)
            return inv
            
        
        return merge(nums,0,len(nums)-1)
        l