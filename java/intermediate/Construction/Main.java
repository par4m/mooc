package Construction;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Shirt  s = new Shirt("White",'M'); // create object
        System.out.println(s.color);
        System.out.println(s.size);
        s.putOn()
        s.takeOff();
    }
}
