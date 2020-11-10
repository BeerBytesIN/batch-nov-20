/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

public class Spiral {
    public static void spiral(int[][] arr,int r,int c)
    {
        int startr=0;
        int startc=0;
        int dir=0;
        while(startr<=r &&startc <=c)
        {
            if(dir==0)
            {
                for(int i=startc;i<=c;i++)
                {
                    System.out.print(arr[startr][i]+" ");
                }
                startr++;
                dir++;
            }
            else if(dir==1)
            {
                 for(int i=startr;i<=r;i++)
                {
                    System.out.print(arr[i][c]+" ");
                }
             c--;
             dir++;
            }
            else if(dir==2)
            {
                  for(int i=c;i>=startc;i--)
                {
                    System.out.print(arr[r][i]+" ");
                }
             r--;
             dir++;
            }
            else
            {
                  for(int i=r;i>=startr;i--)
                {
                    System.out.print(arr[i][startc]+" ");
                }
             startc++;
                
                
                
                dir=0;
            }
        }
        System.out.println();
    }
	public static void main (String[] args) throws Exception {
	     Sinn.init(System.in);
	     int test=Sinn.nextInt();
	     while(test>0)
	     {
	         int row=Sinn.nextInt();
	         int col=Sinn.nextInt();
	         int[][] arr=new int[row][col];
	         for(int i=0;i<row;i++)
	         {
	             for(int j=0;j<col;j++)
	             {
	                 arr[i][j]=Sinn.nextInt();
	             }
	         }
	         spiral(arr,row-1,col-1);
	         
	         
	         
	         
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