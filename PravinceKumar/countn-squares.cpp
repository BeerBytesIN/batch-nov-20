class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count=0;
        for(int i=1;i<=sqrt(N);i++)
        {
            if((i*i)<N)
                count++;
        }
        return count;
    }
};
