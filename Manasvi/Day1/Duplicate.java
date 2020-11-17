public class Duplicate{
    public int findDuplicate(int[] nums) {
        for(int i=0;i<nums.length;i++)
        {
            int a=Math.abs(nums[i]);
            if(nums[a-1]>0)
            {
                nums[a-1]=-1*nums[a-1];
            }
            else
            {
                return a;
            }
        }
        return -1;
    }
}
