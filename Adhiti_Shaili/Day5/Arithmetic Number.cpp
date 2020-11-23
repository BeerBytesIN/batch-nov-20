#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int inSequence(int A, int B, int C){
        if(A==B)
        {
            return 1;
        }
        else if(C==0)
        {
            return 0;
        }
        int diff=B-A;
        if(diff<0&&C<0&&abs(diff)%abs(C)==0)
        {
            return 1;
        }
        else if(diff>0&&C>0&&diff%C==0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}