class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
            return 1;
       int l=0;
        int r=x;
        while(l<=r){
            long long m=(l+r)/2;
            if(m*m<=x && (m+1)*(m+1)>x)
                return m;
            if(m*m>x){
                r=m;
            }
            else
                l=m;
        }
        return -1;
    }
};