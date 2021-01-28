import java.util.*;

public class Pow{
    // leetcode 50
    public static double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(n%2) return x*Math.pow(x/2)*1.0;
    }

    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        double x=scn.nextDouble();
        int n=scn.nextInt();
        System.out.println(myPow(x,n));
        return ;
    }
}