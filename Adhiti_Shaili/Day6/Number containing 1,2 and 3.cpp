#include<bits/stdc++.h>
using namespace std;

map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 
void findAll() {
    queue<string> q;
    q.push("1");
    q.push("2");
    q.push("3");
    while(!q.empty())
    {
        string ans=q.front();
        q.pop();
        if(ans.size()>6)
        {
            continue;
        }
        int x=stoi(ans);
        mp[x]=1;
        q.push(ans+"1");
        q.push(ans+"2");
        q.push(ans+"3");
    }
    mp[1000000]=1;
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
}  