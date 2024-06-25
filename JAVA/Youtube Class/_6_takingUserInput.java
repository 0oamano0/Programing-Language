
import java.util.Scanner;

public class _6_takingUserInput {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        // System.out.print("Enter your Age : ");
        // int age=sc.nextInt();
        // System.out.println("Your Age is : "+age);

        float firstnumber=sc.nextFloat();
        long secondNumber=sc.nextLong();

        int result=(int)(firstnumber+secondNumber);
        System.out.println(result);

        sc.close();
        
        
    }
    
}
