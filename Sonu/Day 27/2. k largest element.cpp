// https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int, vector<int>, greater<int> > minh;
	    
	    for(int i=0; i<n; i++)
	    {
	        minh.push(arr[i]);
	        
	        if(minh.size()>k)
	            minh.pop();
	    }
	    
	    vector<int> ans;
	    for(int i=0; i<k; i++){
	        ans.push_back(minh.top());
	        minh.pop();
	    }
	}

};
