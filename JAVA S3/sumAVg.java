import java.util.*;
class SUMAVG
{
    public static void main(String args[])
    {
        int a,b,sum,avg;
        Scanner s=new Scanner(System.in);
        System.out.println("enter the two numbers: ");
        a=s.nextInt();
        b=s.nextInt();
        sum=a+b;
        avg=sum/2;
        System.out.println("the sum is "+sum+"\n the avg is "+avg);
        s.close();
        
        
    }
}