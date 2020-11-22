// https://leetcode.com/problems/two-sum/

// Using hashmap
// Time -- O(N)  
// Space -- O(N)  

class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        vector<int> arr(2, -1);
        int n = A.size();
        
        map<long long, int> hash; // map of pairs of <target-A[i], i> 
        for(int i=0;i<n;i++) {
            if (hash.find(A[i])!=hash.end()) {
                arr[0] = hash[A[i]];
                arr[1] = i;
                return arr;
            }
            hash.insert(pair<long long, int>(target-A[i], i)); 
        }
        return arr; // return [-1, -1] if solution not possible
    }
};

