import java.util.*;



import java.lang.*;
import java.io.*;

public class Trapping {
    public static int count(int[] arr,int n)
    {
        int left_b=0;
        int right_b=0;
        int low=0;
        int high=n-1;
        int water=0;
        while(low<=high)
        {
            if(arr[low]<arr[high])
            {
                if(arr[low]>left_b)
                {
                    left_b=arr[low];
                }
                else{
                    water=water+(left_b-arr[low]);
                }
                low++;
            }
            else
            {
                if(arr[high]>right_b)
                {
                    right_b=arr[high];
                }
                else{
                    water=water+(right_b-arr[high]);
                }
                high--;
            }
            
        }
        return water;
    }
    
    
    public static void main (String[] args) throws Exception {
        Sinn.init(System.in);
        
        int test=Sinn.nextInt();
        
        while(test>0)
        {
            int no_of_ele=Sinn.nextInt();
            int[] arr=new int[no_of_ele];
            for(int i=0;i<no_of_ele;i++)
            {
                arr[i]=Sinn.nextInt();
            }
            System.out.println(count(arr,no_of_ele));
            test--;
            
        }
        
    }
}
class Sinn
{
    static BufferedReader reader;
    static StringTokenizer tokenizer;
    
    /** call this method to initialize reader for InputStream */
    static void init(InputStream input) {
        reader = new BufferedReader(
                                    new InputStreamReader(input) );
        tokenizer = new StringTokenizer("");
    }
    
    /** get next word */
    static String next() throws IOException {
        while ( ! tokenizer.hasMoreTokens() ) {
            
            tokenizer = new StringTokenizer(
                                            reader.readLine() );
        }
        return tokenizer.nextToken();
    }
    
    static int nextInt() throws IOException {
        return Integer.parseInt( next() );
    }
    
    static double nextDouble() throws IOException {
        return Double.parseDouble( next() );
    }
}
