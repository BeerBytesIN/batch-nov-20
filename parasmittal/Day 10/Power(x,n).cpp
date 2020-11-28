class Solution {
public:
    double util(double x,int n){
        if(n==0)
            return 1;
        if(n%2==0){
            return util(x*x,n/2);
        }
        return x*util(x*x,n/2);
            
    }
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        bool flag=false;
        if(n<0)
            flag=true;
       
        n=abs(n);
        double val=util(x,n);
        if(flag)
            return (double)(1/val);
        return val;
    }
};