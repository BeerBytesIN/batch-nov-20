// https://practice.geeksforgeeks.org/problems/arithmetic-number/0

#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int a,b, d;
	    cin>>a>>b>>d;
	    b-=a;
	    if(d==0 && b!=0)
	        cout<<0<<endl;
	   else if(d==0 && b==0) 
	        cout<<1<<endl;
	    else if(abs(b)%d )
	        cout<<0<<endl;
	   else if( (a+d<=(b+a)))
	    cout<<1<<endl;
	}
	return 0;
}
