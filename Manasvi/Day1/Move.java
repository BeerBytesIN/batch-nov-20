import java.util.*;
public class Move {
    public static void moveall(int[] arr)
    {
        int left=0;
        int right=arr.length-1;
        while(left<=right)
        {
            if(arr[left]<0 && arr[right]<0)
            {
                left++;
            }
            else if(arr[left]>0 && arr[right]>0)
            {
                right--;
            }
            else if(arr[left]>0 && arr[right]<0)
            {
                int a=arr[left];
                arr[left]=arr[right];
                arr[right]=a;
                left++;
                right--;
            }
            else
            {
                left++;
                right--;
            }
        }

        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }

    }

    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int no_of_ele=s.nextInt();
        int[] arr=new int[no_of_ele];
        for(int i=0;i<no_of_ele;i++)
        {
            arr[i]=s.nextInt();
        }
        moveall(arr);

    }

}
