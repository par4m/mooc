public class HelloWorld {
    public static void main(String[] args) {
        System.out.print("Hello World\n");
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        int t = a;
        a = b;
        b = t;
        System.out.println(a);
        System.out.println(b);
        
    }
}
