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

	    int low,high,start=0;
	    int maxlen=0;
	    for(int i=0;i<s.length();i++){
	        low=i;
	        high=i;
	        while(low>=0 && high<s.length()){
	            if(s[low]==s[high]){
	              
	                if(maxlen<high-low+1){
	                    maxlen=high-low+1;
	                    start=low;
	                }
	                  low--;
	                high++;
	            }
	            else
	            break;

	        }
	        low=i;
	        high=i+1;
	        while(low>=0 && high<s.length()){
	            if(s[low]==s[high]){
	                
	                if(maxlen<high-low+1){
	                    maxlen=high-low+1;
	                    start=low;
	                }
	                low--;
	                high++;
	            }
	            else
	            break;

	        }
	    }
	    cout<<s.substr(start,maxlen)<<endl;
	}
	return 0;
}