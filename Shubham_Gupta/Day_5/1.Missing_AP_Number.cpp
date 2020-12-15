#include<bits./stdc++.h>
using namespace std;
int inSequence(int A, int B, int C){
        int num=B-A+C;
        double n=fmod(num,C);
        if(n==0) return 1;
        return 0;
   }
   int main(){
   	cout<<inSequence(1,3,2);
   	return 0;
   }