#include <iostream>
using namespace std;
#include<bits/stdc++.h>
void util(vector<string>& ans,string s,int l,int r){
    if(l>r){
        ans.push_back(s);
    }
    for(int i=l;i<=r;i++){
        swap(s[i],s[l]);
        util(ans,s,l+1,r);
        swap(s[i],s[l]);
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    vector<string> ans;
	    util(ans,s,0,s.length()-1);
	    sort(ans.begin(),ans.end());
	    for(int i=0;i<ans.size();i++)
	    cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}