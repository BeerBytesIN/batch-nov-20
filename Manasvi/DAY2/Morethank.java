/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class Morethank {
    public static void count(int[] arr,int n,int k)
    {
        ArrayList<Integer> arri=new ArrayList<Integer>();
        if(k==0)
        {
            return;
        }
        HashMap<Integer,Integer> map=new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++)
        {
            map.put(arr[i],map.getOrDefault(arr[i],0)+1);
            
        }
        for (Map.Entry<Integer, Integer> e : map.entrySet()) 
            {
                if(e.getValue()>n/k)
                {
                    arri.add(e.getKey());
                }
            }
            for(int i=0;i<arri.size();i++)
            {
                System.out.print(arri.get(i)+" ");
            }
    }
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int k=s.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++)
		{
		    arr[i]=s.nextInt();
		}
		count(arr,n,k);
	}
}