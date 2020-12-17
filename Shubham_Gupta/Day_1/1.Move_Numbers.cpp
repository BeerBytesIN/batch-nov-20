#include <iostream>
using namespace std;
// Question : move all negative numbers to beginning and positive to end
// Approach 1:
void swap(int *a,int n){
    	int neg_idx=0,pos_idx=n-1;
        while(neg_idx<pos_idx){
            if(a[neg_idx]<0 && a[pos_idx]<0) neg_idx++;
            else if(a[neg_idx]>=0 && a[pos_idx]>=0) pos_idx--;
            else if(a[neg_idx]>=0 && a[pos_idx]<0)   swap(a[neg_idx++],a[pos_idx--]);
            else{
                pos_idx--;
                neg_idx++;
            }
        }
	return ;
}
//=========================================================================
// Approach 2
void swap2(int *a,int n){
    int neg=0,pos=n-1;
     for(int i=0;i<n;i++){
         if(a[i]<0) swap(a[i],a[neg++]);
         else swap(a[i--],a[pos--]);

         if(neg==pos) return ;
     }
     return ;
}

int main() {
    int n;
    cin>>n;
	int *a;
	a=new int[n]();
	for(int i=0;i<n;i++) cin>>a[i];
    swap2(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"Hello World";
	return 0;
}