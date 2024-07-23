import java.util.*;
class DEETS
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String name,clas;
        int roll;
        
        System.out.println("enter your name: ");
        name=s.nextLine();
        System.out.println("enter your class: ");
        class=s.nextLine();
        System.out.println("enter your roll no: ");
        roll=s.nextInt();
        System.out.println(" NAME: "+name);
        System.out.println(" ROLL: "+roll);
        System.out.println(" CLASS: "+clas);
        s.close();
        
    }
}