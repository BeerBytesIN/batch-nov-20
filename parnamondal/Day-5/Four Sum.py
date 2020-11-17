# Time Complexity - O(N*N*N)
# Space Complexity - O(1)


class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()

        n = len(nums)
        ans = []
        i = 0
        while i <n-3:
            a = nums[i]
            j = i+1
            while j < n-2:
                b = nums[j]
                l = j+1
                r = n-1
                while l<r:
                    c = nums[l]
                    d = nums[r]

                    su = a+b+c+d
                    
                    if su == target:
                        ans.append([a, b, c, d])
                        while l<r-1 and nums[l] == nums[l+1]:
                            l+=1
                        while l+1<r and nums[r] == nums[r-1]:
                            r-=1
                        l+=1; r-=1
                    elif su < target:
                        l+=1
                    else:
                        r-=1
                while j < l-1 and nums[j] == nums[j+1]:
                    j+=1
                j+=1
            while i < j-1 and nums[i] == nums[i+1]:
                i+=1
            i+=1
        
        return ans
