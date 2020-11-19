// Link : https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1
class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(A==B) return 1;
        
        if(B>A && C>0)
            if( (B-A)%C == 0) return 1;
            
        if(B<A && C<0) 
            if( (B-A)%C == 0) return 1;
            
        return 0;
    }
};
