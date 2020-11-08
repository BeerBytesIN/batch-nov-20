#include <iostream>
using namespace std;
// Question : move all negative numbers to beginning and positive to end
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
int main() {
    int n;
    cin>>n;
	int *a;
	a=new int[n]();
	for(int i=0;i<n;i++) cin>>a[i];
    swap(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}