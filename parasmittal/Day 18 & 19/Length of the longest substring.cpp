#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char,int> um;
	    int start=0;
	    int maxlen=0;
	    for(int i=0;i<s.length();i++){
	        if(um.find(s[i])==um.end()){
	            um[s[i]]=i;
	         //   cout<<i<<" "<<start<<endl;
	            maxlen=max(maxlen,i-start+1);
	        }
	        else{
	            if(um[s[i]]>=start){
	                start=um[s[i]]+1;
	                um[s[i]]=i;
	                maxlen=max(maxlen,i-start+1);
	            }
	            else{
	                um[s[i]]=i;
	               maxlen=max(maxlen,i-start+1); 
	            }
	        }
	    }
	    cout<<maxlen<<endl;
	}
	return 0;
}