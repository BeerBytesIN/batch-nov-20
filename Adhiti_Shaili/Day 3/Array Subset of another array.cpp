#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n1,n2,x;
	    cin>>n1>>n2;
	    bool flag=true;
	    unordered_set<int> set;
        //Elements of first array
	    for(int i=0;i<n1;i++)
	    {
	        cin>>x;
	        set.insert(x);
	    }

        //Checking for the presence of 2nd array elements in 1st array
	    for(int i=0;i<n2;i++)
	    {
	        cin>>x;
	        if(set.find(x)==set.end())
	        {
	            flag=false;
	            
	        }
	    }
	    
	    if(flag)
	    {
	        cout<<"Yes";
	    }
	    else
	    {
	        cout<<"No";
	    }
	    cout<<endl;
	  
	}
	return 0;
}