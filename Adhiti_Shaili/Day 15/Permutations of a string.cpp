#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void Perm(int s,int e, unordered_map<char,int> hash,string ans,vector<string>& v)
{
    if(s>e)
    {
        v.push_back(ans);
        return;
    }
    
    for(auto i=hash.begin();i!=hash.end();i++)
    {
        if(i->second>0)
        {
            i->second--;
            Perm(s+1,e,hash,ans+i->first,v);
            i->second++;
        }
    }
}


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s,ans="";
	    cin>>s;
	    int n=s.size();
	    unordered_map<char,int> hash;
	    vector<string> v;
	    for(int i=0;i<n;i++)
	    {
	        hash[s[i]]++;
	    }
	    
	    Perm(0,n-1,hash,ans,v);
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<v.size();i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}