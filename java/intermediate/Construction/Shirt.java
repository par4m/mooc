package Construction;

public class Shirt {
    public static String color;
    public static char size;

    // Constructor inside a class
    Shirt() {
        System.out.println("Inside a Constructor");
    }

    Shirt(String newColor, char newSize) {
        color = newColor;
        size = newSize;
        public static void putOn() {

        }
    }

    public static void putOn(){
        System.out.println("Shirt is On");
    }
    public static void takeOff() {
        System.out.println("Shirt is Off");
    }
    
}
