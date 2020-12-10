class Solution:
    def trap(self, height: List[int]) -> int:
        total_water = 0
        for i in range(1,len(height)):
            l_max = max(height[:i])
            r_max = max(height[i:])
            # print(l_max, r_max)
            water_under_building = min(l_max,r_max)
            water = water_under_building - height[i]
            if water > 0:
                total_water += water
            # print(water, total_water)
        return(total_water)
#link on leetcode: https://leetcode.com/problems/trapping-rain-water/submissions/       
