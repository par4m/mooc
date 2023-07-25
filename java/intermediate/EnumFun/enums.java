package EnumFun;

enum Level {
    LOW, MEDIUM, HIGH;
}

public class enums {
    public static void main(String[] args) {
        Level l = Level.LOW;
        System.out.println(l);
        switch(l) {
        case LOW:
            System.out.println("Low level");
            break;
        case MEDIUM:
            System.out.println("Medium Level");
            break;
        case HIGH:
            System.out.println("High Level");
            break;
        }

    }
}
