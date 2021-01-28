import java.util.*;

public class Min_Subarray_Sum{

    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        int s=scn.nextInt();
        int n=scn.nextInt();
        int nums[]=new int[n];
        for(int i=0;i<n;i++)
            nums[i]=scn.nextInt();
        
        System.out.print(minSubArrayLen(s,nums));
        return;
    }

    public static int minSubArrayLen(int s, int[] nums) {
        int n=nums.length;
        int start=0,end=0;
        int len=n+1,sum=0;
        while(end<n){
            sum+=nums[end];
            while(sum>=s && start<=end){
                len=Math.min(len,end-start+1);
                sum-=nums[start++];
            }
            end++;
        }
        return len==n+1?0:len;
    }
}