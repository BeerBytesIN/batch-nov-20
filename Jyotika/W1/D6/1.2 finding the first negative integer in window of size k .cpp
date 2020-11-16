#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int k;
	cin>>k;
	queue<int>q;
	int start=0,end=0;
	while(start<=end && (end<n))
	{
		if(ar[end]<0)
		{
			q.push(end);
			//end++;
		}
		if(end-start+1 <k)
		{
			end++;
		}
		else if(end-start +1 ==k)
		{
			if(!q.empty())
			{
				cout<<ar[q.front()]<<" ";
			}
			else
			{
				cout<<"0 ";
			}
			while(!q.empty() && q.front()<(n-k+1))
			{
				q.pop();
			}
			start++;
			//end++;
		}
		
	}
	
}