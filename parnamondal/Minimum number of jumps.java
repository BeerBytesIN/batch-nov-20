# Time Complexity - O(N)
# Space Complexity - O(1)

# JAVA SOLUTION 

class solve{
    static int minJumps(int[] arr){
        // your code here
        int n =arr.length;
        if (arr[0]==0) {
            return -1;
        }
        if (n<=1){
            return 0;
        }
        //int count =0;
        int jumps=0;
        int i=0;
        int cr=0;
        int nr=0;
        while (i<=cr){
            if (i==n-1){
                return jumps;
            }
            nr=Math.max(nr,i+arr[i]);
            if (i==cr){
                jumps+=1;
                cr=nr;
            }
            i+=1;
            
            
        }
        return -1;
        
                
                
            
            
        }
        
    
}