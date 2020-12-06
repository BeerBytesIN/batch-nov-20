#include <iostream>
using namespace std;
#include<bits/stdc++.h>
void generate_sets(vector<int> input,int start,int length,vector<int>& output){
    int number_of_subsets=1<<length;
    int sum=0;
    for(int number=0;number<number_of_subsets;number++){
        int mask=number;
        sum=0;
        for(int i=0;i<length;i++){
            if(mask & (1<<i))
                sum+=input[start+i];
        }
        output.push_back(sum);
    }
}
int main() {
	unsigned long long ans=0;
	int N,A,B;
	cin>>N>>A>>B;
	vector<int> input(N,0);
	for(int i=0;i<N;i++)
	    cin>>input[i];
	vector<int> left,right;
	generate_sets(input,0,N/2,left);
	vector<int> :: iterator low,high;
	generate_sets(input,N/2,N&1?N/2+1:N/2,right);
	sort(right.begin(),right.end());
	for(int i=0;i<left.size();i++){
	    low=lower_bound(right.begin(),right.end(),A-left[i]);
	    high=upper_bound(right.begin(),right.end(),B-left[i]);
	    ans+=(high-low);
	}
	cout<<ans<<endl;
	return 0;
}