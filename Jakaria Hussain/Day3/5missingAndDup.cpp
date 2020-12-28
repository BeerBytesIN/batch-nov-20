// Link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int i,ans[2];
        for (i = 0; i < n; i++) { 
                if (arr[abs(arr[i]) - 1] > 0) 
                    arr[abs(arr[i]) - 1] = - arr[abs(arr[i]) - 1]; 
                else
                    ans[0] = abs(arr[i]); 
                } 
          
                for (i = 0; i < n; i++) { 
                    if (arr[i] > 0) 
                        ans[1] = (i + 1); 
                } 
        // cout<<ans[0] <<" "<<ans[1]<<endl;
        
        int *ptr = ans;
        return ptr;
    }
};
