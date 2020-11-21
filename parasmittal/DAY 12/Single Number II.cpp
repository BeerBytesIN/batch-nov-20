class Solution {
public:
    int singleNumber(vector<int>& arr) {
       int result = 0; 
  int n=arr.size();
    int x, sum; 
    for (int i = 0; i < 32; i++) { 
        sum = 0; 
        x = (1 << i); 
        for (int j = 0; j < n; j++) { 
            if (arr[j] & x) 
                sum++; 
        } 
        if ((sum % 3) != 0) 
            result |= x; 
    } 
    return result; 
    }
};