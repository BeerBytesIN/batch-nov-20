class Solution
{
  public:
    // function to count the total  
    // number of ways to sum up to 'N' 
    int countWays(int arr[], int m, int N) 
    { 
      //code here.
      int dp[N+1];
      dp[0]=1;
      for(int i=1;i<=N;i++)
      {
          dp[i]=0;
          for(int j=0;j<m;j++){
              if(i-arr[j]>=0){
                  dp[i]=(dp[i]+dp[i-arr[j]])%1000000007;
              }
          }
      }
      return dp[N];
    } 
    
};