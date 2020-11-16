/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

public class Zerosum {
    public static boolean zerosum(int[] arr,HashMap<Integer,Integer> map)
    {
        int sum=0;
        for(int i=0;i<arr.length;i++)
        {
            sum=sum+arr[i];
            if(sum==0)
            {
                return true;
            }
            if(map.containsKey(sum) && map.get(sum)!=i)
            {
                return true;
            }
        }
        return false;
    }
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		int test=s.nextInt();
		while(test>0)
		{
		   int no_of_ele=s.nextInt();
		   int[] arr=new int[no_of_ele];
		   HashMap<Integer,Integer> map=new HashMap<Integer,Integer>();
		   int sum=0;
		   for(int i=0;i<no_of_ele;i++)
		   {
		       arr[i]=s.nextInt();
		       sum=sum+arr[i];
		       map.put(sum,i);
		   }
		    if(zerosum(arr,map))
		    {
		        System.out.println("Yes");
		    }
		    else
		    {
		        System.out.println("No");
		    }
		    
		    
		    test--;
		}
	}
}