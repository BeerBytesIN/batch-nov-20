class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int x) {
        int n=arr.size();
        if(n==0)
            return false;
        int m=arr[0].size();
        if(m==0)
            return false;
        int i=0;
        int j=m-1;
        while(i<n && j>=0){
            if(arr[i][j]==x)
                return true;
            if(arr[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};