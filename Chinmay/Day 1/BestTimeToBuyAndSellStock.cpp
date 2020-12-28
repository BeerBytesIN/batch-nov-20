class Solution {
    
    public int maxmiddle(int[] a, int l, int r){
        
        int mid = (l+r)/2;
        
        int i = mid;
        int j = mid+1;
            
        int sum1 = 0,sum2 = 0;
        int temp = 0;
        while(i >= l){
            
            temp = temp+a[i];
            if(temp > sum1){
                sum1 = temp;
            }
            i--;
        }
        
        temp = 0;
        
        while(j <= r){
            temp = temp+a[j];
            if(temp > sum2){
                sum2 = temp;
            }
            j++;
        }
        
        return sum1+sum2;
    }
    
    public int profit(int[] a, int l, int r){
        
        if(l > r){
            return 0;
        }
        if(l == r){
            return a[l];
        }
        int mid=(l+r)/2;
        return Math.max(profit(a,l,mid),Math.max(profit(a,mid+1,r),maxmiddle(a,l,r)));
        
    }
    public int maxProfit(int[] prices) {
            
        if(prices.length <= 1){
            return 0;
        }
        int[] diff = new int[prices.length -1];
        
        for(int i = 0; i < prices.length-1;i++){
            diff[i] = prices[i+1]-prices[i];
        }
        
        int ans = profit(diff,0,diff.length-1);
        
        if(ans < 0){
            return 0;
        }
        return ans;
        
    }
}