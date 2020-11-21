/* Searching in a 2d matrix */
/* RDX TYPES */
/* Time complexity : O(log(m*n)) , Space Complexity : O(1) */
/* Best thing is to map a 2d vector to a linear vector */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        if(n==0)return false;
        int m = matrix[0].size();
        int low =0;
        int high = (n*m) -1;
     
        while(low<=high)
        {
            int mid = low+ (high-low)/2;
            int r= mid/m;
            int c= mid%m;
            if(matrix[r][c]==target)
            {
                 return true;
            }
            else if(matrix[r][c] <target)
            {
                 low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        
        }
        return false;
    }
};