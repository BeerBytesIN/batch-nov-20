/* O(T*N) but still getting tle on submission*/
#include<bits/stdc++.h>
using namespace std;

map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 

void findAll() {
    //code here
    for(int i=1;i<=1000000;i++)
    {
       int o=i/1 %10;
       int t= i/10 %10;
       int th = i/100 %10;
       int fr = i/1000 %10;
       int fv = i/10000 %10;
       int si = i/100000 %10;
       if(o==1 || o==2 || o==3) mp[i]=1;
       if(t==1 || t==2 || t==3) mp[i]=1;
       if(th==1 || th==2 || th==3) mp[i]=1;
       if(fr==1 || fr==2 || fr==3) mp[i]=1;
       if(fv==1 || fv==2 || fv==3) mp[i]=1;
       if(si==1 || si==2 || si==3) mp[i]=1;
       
    }
}

int main()
{   
    findAll(); // find all such numbers whose digits are from set {1,2,3} from 1 to 1000000
    int t;
    cin>>t; 
    
    while(t--)
    {
        int n, flag=0;
        cin>>n; 
        
        int arr[n] ;
        
        for(int i=0;i<n;i++) // insert n elements
            cin >> arr[i]; 
        
        sort(arr,arr+n); // sort them
        
        for(int i = 0 ; i < n ; ++ i ) {
            if(mp[arr[i]]) { // if arr[i] is already there in the map then it satisfied else not 
                cout << arr[i] << " " ;
                flag=1;
            }
        }
        
        if(!flag)
            cout << "-1"; 
            
        cout<<endl;
    }
return 0;
}  // } Driver Code Ends