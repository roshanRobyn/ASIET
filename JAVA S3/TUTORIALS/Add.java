import java.util.Scanner;
class Addition{
public static void main(String[] args){
int a,b,sum;
System.out.println("Enter the two numbers:");
Scanner sc = new Scanner(System.in);
a = sc.nextInt();
b = sc.nextInt();
sum = a + b;
System.out.println("Sum of " +a+ " + " +b+ " = " +sum);
sc.close();
}
}
