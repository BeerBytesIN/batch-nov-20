#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,c,b;
	    cin>>a>>b>>c;
	    
	    if((c==0 && b==a)|| (c!=0 && (b-a)%c==0 && (b-a)/c>=0))
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}