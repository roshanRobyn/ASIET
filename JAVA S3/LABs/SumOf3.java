import java.util.*;
class SUM3
{
    public static void main(String args[])
    {
        int a,b,sum,c;
        Scanner s=new Scanner(System.in);
        System.out.println("enter the three numbers: ");
        a=s.nextInt();
        b=s.nextInt();
        c=s.nextInt();
        sum=a+b+c;
        System.out.println("the sum is "+sum);
        s.close();
        
        
    }
}