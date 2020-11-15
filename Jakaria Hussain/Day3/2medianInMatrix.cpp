// Link : https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
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
