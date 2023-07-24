import java.util.Scanner;

public class TakeInput {
    public static void main(String[] args) {
     // Input >
     Scanner sc = new Scanner(System.in);
     System.out.print("Input Your Age: ");
     int age = sc.nextInt();
     System.out.println();
     System.out.println(age);
     System.out.print("Enter Your Name: ");
     String name = sc.next();
     System.out.println();
     System.out.println(name);
     System.out.print("Enter a sentence: ");
     String sent = sc.nextLine();
     System.out.println(sent);

     for(int i=0;i < 10;i++) {
        System.out.println(i);
     }

    }
}
