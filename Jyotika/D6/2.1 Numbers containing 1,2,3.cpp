/*  O(T*NLOGN), but getting tle on submission */
#include<bits/stdc++.h>
using namespace std;



map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 

vector<int> checkdigits(int num)
{
    vector<int>ans;
    while(num)
    {
        ans.push_back(num%10);
        num/=10;
    }
    return ans;
}

void findAll() {
    //code here
    for(int i=1;i<=1000000;i++)
    {
        vector<int>dig = checkdigits(i);
        for(int j=0;j<dig.size();j++)
        {
            if(dig[j]==1 || dig[j]==2 || dig[j]==3)
            {
                mp[i]=1;
            }
        }
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