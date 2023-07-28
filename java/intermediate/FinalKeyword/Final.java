package FinalKeyword;

public class Final {
    final int MAX = 5;
    final public void sayHi() {
        System.out.println("hi!");
    }
    
    public static void main(String[] args) {
        Final f = new Final();
        System.out.println(f.MAX);
        f.sayHi();
        
    }
}

class OtherClass extends Final {
    public void sayHi() {
        System.out.println("Hello!");
    }
}