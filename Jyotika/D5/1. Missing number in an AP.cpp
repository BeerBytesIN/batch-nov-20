
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(C==0 && B!=A)return 0;
        else if(C==0 && B==A)return 1;
        if((B-A)%C==0 )
        {
           
           if((C>=0 && B>=A)|| (C<0 && B<=A))
           return 1;
           else
           return 0;
           
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