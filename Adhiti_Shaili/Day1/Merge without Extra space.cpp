#include<iostream>
#include <vector>
#include <queue>
using namespace std;

int nextGap(int gap) 
{ 
    if (gap <= 1) 
        return 0; 
    return (gap / 2) + (gap % 2); 
} 

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n1,n2;
	    cin>>n1>>n2;
	    vector<int> v1(n1,0);
	    vector<int> v2(n2,0);
	    for(int i=0;i<n1;i++)
	    {
	        cin>>v1[i];
	    }
	    for(int i=0;i<n2;i++)
	    {
	        cin>>v2[i];
	    }

        int i, j, gap = n1 + n2; 
        for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
        { 
            for (i = 0; i + gap < n1; i++) 
                if (v1[i] > v1[i + gap]) 
                    swap(v1[i], v1[i + gap]); 
  
            for (j = gap > n1 ? gap-n1 : 0 ; i < n1&&j < n2; i++, j++) 
               if (v1[i] > v2[j]) 
                    swap(v1[i], v2[j]); 
  
            if (j < n2) 
            { 
                for (j = 0; j + gap < n2; j++) 
                    if (v2[j] > v2[j + gap]) 
                        swap(v2[j], v2[j + gap]); 
            } 
        } 
        for(int i=0;i<n1;i++)
	    {
	        cout<<v1[i]<<" ";
	    }
	    for(int i=0;i<n2;i++)
	    {
	        cout<<v2[i]<<" ";
	    }
        
	    cout<<endl;
	    
	}
	return 0;
}