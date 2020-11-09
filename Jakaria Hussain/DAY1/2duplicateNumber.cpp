// Rabbit-hare Problem
//Link : https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = nums[0], fast = nums[0];
        slow = nums[slow] , fast = nums[nums[fast]];
        
        // fix fast pointer.
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        
        // check when slow pointer meets fast pointer again:
        slow = nums[0];        
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
