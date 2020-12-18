#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    int i=0,j=0,maxlen=0;
	    unordered_set<char> hash;
	    while(i<=j&&j<n)
	    {
	        if(hash.find(s[j])==hash.end())
	        {
	            hash.insert(s[j]);
	            j++;
	        }
	        else
	        {
	            while(hash.find(s[j])!=hash.end())
	            {
	                maxlen=max(maxlen,j-i);
	                hash.erase(s[i]);
	                i++;
	                
	            }
	        }
	    }
	    maxlen=max(maxlen,j-i);
	    cout<<maxlen<<endl;
	}
	return 0;
}