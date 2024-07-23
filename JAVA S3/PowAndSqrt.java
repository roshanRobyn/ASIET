import java.util.*;
import java.lang.*;
class POWSQRT
{
    public static void main(String args[])
    {
        double a,b,p,sq,c,d;
        Scanner s=new Scanner(System.in);
        System.out.println("POWER");
        System.out.println("enter the number: ");
        a=s.nextInt();
        System.out.println("enter the power: ");
        b=s.nextInt();
        p=Math.pow(a,b);
        System.out.println("the value of "+a+" to the power of "+b+" is "+p);
        System.out.println("SQUARE ROOT");
        System.out.println("enter the number: ");
        c=s.nextInt();
        sq=Math.sqrt(c);
        System.out.println("the square root is "+sq);
        s.close();
        
        
    }
}