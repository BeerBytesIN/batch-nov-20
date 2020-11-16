
class Kadane{
    
    // Function to find subarray with maximum sum
    // arr: input array
    // n: size of array
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
         int maxSum=arr[0];
   int sum=0;
   for(int i=0;i<n;i++)
   {
      sum=sum+arr[i];
      if(sum>maxSum)
      {
          maxSum=sum;
      }
      if(sum<0)
      {
          sum=0;
      }
   }
   
    return maxSum;
        
    }
    
}