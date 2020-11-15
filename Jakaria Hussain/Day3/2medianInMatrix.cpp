// Link : https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

/*
Algorithm:  
First, we find the minimum and maximum elements in the matrix. The minimum element can be easily found by comparing the first element of each row, and similarly, the maximum element can be found by comparing the last element of each row.
Then we use binary search on our range of numbers from minimum to maximum, we find the mid of the min and max and get a count of numbers less than our mid. And accordingly change the min or max.
For a number to be median, there should be (r*c)/2 numbers smaller than that number. So for every number, we get the count of numbers less than that by using upper_bound() in each row of the matrix, if it is less than the required count, the median must be greater than the selected number, else the median must be less than or equal to the selected number. 

*/

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
        int mn,mx;
    
        for(int i=0;i<r;i++){
            mn = min(mn,matrix[i][0]);
            mx = max(mx,matrix[i][c-1]);
        }
        
        int desired = (r*c+1)/2;
        
        while(mn<mx){
            int mid = mn + (mx-mn)/2;
            int place = 0;
            
            // count no of elements less than mid : 
            for(int i=0;i<r;i++){
                place += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(place<desired) 
                mn = mid+1;
            else mx = mid;
        }
        
        return mn;
    }
};
