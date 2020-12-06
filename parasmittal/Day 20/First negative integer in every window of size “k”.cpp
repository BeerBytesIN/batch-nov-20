#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int k;
	    cin>>k;
	    deque<int> q;
	    for(int i=0;i<k;i++)
	    if(arr[i]<0)
	    q.push_back(i);
	    for(int i=k;i<n;i++){
	        if(q.empty())
	        cout<<0<<" ";
	        else
	        cout<<arr[q.front()]<<" ";
	        while(!q.empty() && i-q.front()>=k)
	        q.pop_front();
	        if(arr[i]<0)
	        q.push_back(i);
	    }
	    if(q.empty())
	        cout<<0<<" ";
	        else
	        cout<<arr[q.front()]<<" ";
	        cout<<endl;
	}
	return 0;
}