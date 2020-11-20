class Solution {
public:
    double expo(double a, long long int b)
    {
        double res=1;
        while(b)
        {
            if(b&1)
                res = res*a;
            
            b= b>>1;
            a=a*a;
        }
        return res;
    }
    double myPow(double x, long long int n) {
        
        
        
        double ans=0;
        if(n<0)
        {
            double num= 1;
            double denom = expo(x,-1*n);
            ans = num/denom;
        } 
        else
        {
            double num = expo(x,n);
            ans= num;
        }
        return ans;
    }
};