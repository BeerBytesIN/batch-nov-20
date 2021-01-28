import java.util.*;
public class Search_2D{
    public static void main(String[] args){

        Scanner scn=new Scanner(System.in);
        int target=scn.nextInt();
        int n=scn.nextInt();
        int matrix[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                matrix[i][j]=scn.nextInt();
        }
        System.out.println(searchMatrix(matrix,target));
    }
    public static int find(int[][] matrix,int row,int end, int target){
        int start=0;
        while(start<=end){
            int mid=(start+end)/2;
            int num=matrix[row][mid];
            if(num==target) return mid;
            else if(target>num) start=mid+1;
            else end=mid-1;
        }
        return -1;
    }
    public static int find2(int[][] matrix,int start,int end, int target){
        while(start<=end){
            int mid=(start+end)/2;
            int num=matrix[mid][0];
            int prev=matrix[mid-1][0];
            if((target>=prev && target<=num)) {
                if(target==num) return find(matrix,mid,matrix[0].length-1,target); 
                return find(matrix,mid-1,matrix[0].length-1,target);
            }
            else if(num<target) start=mid+1;
            else end=mid-1;
        }
        return -1;
    }
    public static boolean searchMatrix(int[][] matrix, int target) {
        int n=matrix.length;
        if(n==0) return false;
        int m=matrix[0].length;
        if(n==0) return false;
        boolean ans=false;
        if(find(matrix,0,m-1,target)>=0) return true;
        if(find2(matrix,1,n-1,target)>=0) return true;
        if(find(matrix,n-1,m-1,target)>=0) return true;
        return false;
    }
}