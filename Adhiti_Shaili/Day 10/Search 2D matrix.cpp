#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size()==0)
        {
            return false;
        }
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        if(m==1&&n==1)//&&matrix[0][0]==target)
        {
            if(matrix[0][0]==target)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        int low=0;
        int high=m-1;
        
        int row=0;
       // int col=0;
        
        while(low<high)//
        {
            int mid=(low+high)/2;
            if(matrix[mid][n-1]==target)
            {
                // row=mid;
                // break;
                return true;
            }
            else if(matrix[mid][n-1]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
            row=low;
        }
        
        low=0;
        high=n-1;
        while(low<=high)//
        {
            int mid=(low+high)/2;
            if(matrix[row][mid]==target)
            {
                return true;
            }
            else if(matrix[row][mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            //row=low;
        }
        return false;
        
    }
};