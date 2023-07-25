public class Pen {

    // Object Attributes
    String type = "gel";
    String color = "blue";
    int point = 10;

    public static void main(String[] args) {
        System.out.println("****Program Start****");

    }

    static boolean clicked = false;

    // Object Actions
    public static void click() {
        clicked = true;
    }
    public static void unclick() {
        clicked = false;
    }
}