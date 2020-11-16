class Solution1 {
    int getPairsCount(int[] arr, int n, int sum) {
        HashMap<Integer,Integer> map=new HashMap<Integer,Integer>();
        
        for(int i=0;i<n;i++)
        {
            map.put(arr[i],map.getOrDefault(arr[i],0)+1);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(map.containsKey(sum-arr[i]))
            {
                count=count+map.get(sum-arr[i]);
            }
            if(sum-arr[i]==arr[i])
            {
                count=count-1;
            }
        }
       
        return  count/2;
    }
}
