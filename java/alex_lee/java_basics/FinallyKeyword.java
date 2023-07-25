import java.util.Scanner;

public class FinallyKeyword {
    public static void main(String[] args) {
        // 
        // int a=5;
        // int b = 0;
        // int c = a/b;
        Scanner scan = new Scanner(System.in);
        try {
            System.out.println(scan.next());
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println(e);
        } finally {
        scan.close();
        System.out.println("Finally closed");
        }
    }
}
